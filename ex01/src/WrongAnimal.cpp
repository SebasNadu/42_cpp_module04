/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:21 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:06:22 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("Unknown WrongAnimal") {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : type(type) {
  std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  *this = src;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
  std::cout << "WrongAnimal assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void WrongAnimal::makeSound(void) const {
  std::cout << "WrongAnimal: I am a WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const { return this->type; }
