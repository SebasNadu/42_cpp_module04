/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:05 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:06 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
  std::cout << "Cat copy constructor called" << std::endl;
  *this = src;
}

Cat &Cat::operator=(Cat const &rhs) {
  std::cout << "Cat assignation operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

Cat::~Cat(void) { std::cout << "Cat destructor called" << std::endl; }

void Cat::makeSound(void) const {
  std::cout << "Cat: Meow Meow Meow!" << std::endl;
}
