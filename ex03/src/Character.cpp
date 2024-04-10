/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:59 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:21:00 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "colors.hpp"
#include <iostream>

Character::Character() : _name("default") {
  std::cout << BLU << "Character default constructor called" << CRESET
            << std::endl;
  this->_initInventory();
}

Character::Character(Character const &src) {
  std::cout << BLU << "Character copy constructor called" << CRESET
            << std::endl;
  this->_initInventory();
  *this = src;
}

Character::Character(std::string const &name) : _name(name) {
  std::cout << BLU << "Character name constructor called" << CRESET
            << std::endl;
  this->_initInventory();
}

Character::~Character() {
  std::cout << BLU << "Character destructor called" << CRESET << std::endl;
  this->_deleteInventory();
}

Character &Character::operator=(Character const &rhs) {
  std::cout << BLU << "Character assignation operator called" << CRESET
            << std::endl;
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_deleteInventory();
    for (int i = 0; i < this->_maxInventory; i++) {
      if (rhs._inventory[i] != NULL)
        this->_inventory[i] = rhs._inventory[i]->clone();
    }
  }
  return *this;
}

std::string const &Character::getName() const { return this->_name; }

void Character::setName(std::string const &name) { this->_name = name; }

void Character::equip(AMateria *m) {
  if (m == NULL) {
    std::cout << RED << this->_name << ": Cannot equip a NULL materia" << CRESET
              << std::endl;
    return;
  }
  for (int i = 0; i < this->_maxInventory; i++) {
    if (this->_inventory[i] == NULL) {
      this->_inventory[i] = m;
      std::cout << GRN << this->_name << ": Materia " << m->getType()
                << " equipped to the index " << i << CRESET << std::endl;
      return;
    }
  }
  std::cout << RED << this->_name << ": The inventory is full" << CRESET
            << std::endl;
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= this->_maxInventory) {
    std::cout << RED << this->_name
              << ": I cannot unequip a materia that is not in the inventory. "
              << idx << " is not a valid index." << CRESET << std::endl;
    return;
  }
  if (this->_inventory[idx] == NULL) {
    std::cout
        << RED << this->_name
        << ": I cannot unequip a materia that is not in the inventory. Index "
        << idx << " is empty." << CRESET << std::endl;
    return;
  }
  std::cout << GRN << this->_name << ": Materia "
            << this->_inventory[idx]->getType() << " unequipped from the index "
            << CRESET << idx << std::endl;
  this->_inventory[idx] = NULL;
  return;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || idx >= this->_maxInventory) {
    std::cout << RED << this->_name
              << ": I cannot use materia that is not in the inventory. " << idx
              << " is not a valid index." << CRESET << std::endl;
    return;
  }
  if (this->_inventory[idx] == NULL) {
    std::cout << RED << this->_name
              << ": I cannot use materia that is not in the inventory. Index "
              << idx << " is empty." << CRESET << std::endl;
    return;
  }
  std::cout << GRN << this->_name << ": " << CRESET;
  this->_inventory[idx]->use(target);
}

void Character::_initInventory() {
  for (int i = 0; i < this->_maxInventory; i++) {
    this->_inventory[i] = NULL;
  }
}

void Character::_deleteInventory() {
  for (int i = 0; i < this->_maxInventory; i++) {
    delete this->_inventory[i];
  }
}

void Character::displayInventory() const {
  std::cout << BLU << this->_name << ": Inventory display" << std::endl;
  for (int i = 0; i < this->_maxInventory; i++) {
    std::cout << BLU << "\tSlot [" << i << "]: ";
    if (this->_inventory[i] == NULL)
      std::cout << YEL << "Empty slot" << CRESET << std::endl;
    else
      std::cout << GRN << this->_inventory[i]->getType() << CRESET << std::endl;
  }
}
