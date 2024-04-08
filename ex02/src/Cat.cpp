/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:05 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:19:44 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain()) {
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : _brain(NULL) {
  std::cout << "Cat copy constructor called" << std::endl;
  *this = src;
}

Cat::~Cat(void) {
  std::cout << "Cat destructor called" << std::endl;
  delete this->_brain;
}

Cat &Cat::operator=(Cat const &rhs) {
  std::cout << "Cat assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    if (this->_brain != NULL)
      delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Cat: Meow Meow Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const { return this->_brain; }
