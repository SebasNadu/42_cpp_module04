/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:12 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:13 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Unknown") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : type(type) {
  std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
  std::cout << "Animal copy constructor called" << std::endl;
  *this = src;
}

Animal &Animal::operator=(Animal const &rhs) {
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

Animal::~Animal(void) { std::cout << "Animal destructor called" << std::endl; }

void Animal::makeSound(void) const {
  std::cout << "Animal: I am an animal" << std::endl;
}

std::string Animal::getType(void) const { return this->type; }
