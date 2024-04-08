/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:45 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 16:21:05 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog"), _brain(new Brain()) {
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : _brain(NULL) {
  std::cout << "Dog copy constructor called" << std::endl;
  *this = src;
}

Dog::~Dog(void) {
  std::cout << "Dog destructor called" << std::endl;
  delete this->_brain;
}

Dog &Dog::operator=(Dog const &rhs) {
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    if (this->_brain != NULL)
      delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Dog: Woof Woof Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const { return this->_brain; }
