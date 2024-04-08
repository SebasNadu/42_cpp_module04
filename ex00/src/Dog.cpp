/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:45 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:06:46 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
  std::cout << "Dog copy constructor called" << std::endl;
  *this = src;
}

Dog &Dog::operator=(Dog const &rhs) {
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

Dog::~Dog(void) { std::cout << "Dog destructor called" << std::endl; }

void Dog::makeSound(void) const {
  std::cout << "Dog: Woof Woof Woof!" << std::endl;
}
