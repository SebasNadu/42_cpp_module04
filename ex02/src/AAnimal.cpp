/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:12 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:19:06 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("Unknown") {
  std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : type(type) {
  std::cout << "Animal type constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
  std::cout << "Animal copy constructor called" << std::endl;
  *this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

AAnimal::~AAnimal(void) {
  std::cout << "Animal destructor called" << std::endl;
}

void AAnimal::makeSound(void) const {
  std::cout << "Animal: I am an animal" << std::endl;
}

std::string AAnimal::getType(void) const { return this->type; }
