/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:41 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:20:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "colors.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
  std::cout << BLU << "Cure default constructor called" << CRESET << std::endl;
}

Cure::Cure(Cure const &src) {
  std::cout << BLU << "Cure copy constructor called" << CRESET << std::endl;
  *this = src;
}

Cure::~Cure() {
  std::cout << BLU << "Cure destructor called" << CRESET << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {
  std::cout << BLU << "Cur assignation operator called" << CRESET << std::endl;
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

Cure *Cure::clone() const {
  std::cout << YEL << "Cure clone called" << CRESET << std::endl;
  return new Cure(*this);
}

void Cure::use(ICharacter &target) {
  std::cout << GRN << "* heals " << target.getName() << "'s wounds *" << CRESET
            << std::endl;
}
