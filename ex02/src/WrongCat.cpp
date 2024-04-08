/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:59 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:01 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
  std::cout << "WrongCat copy constructor called" << std::endl;
  // *this = src;
}

WrongCat::~WrongCat(void) {
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
  std::cout << "WrongCat copy assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}

void WrongCat::makeSound(void) const {
  std::cout << "WrongCat: Meow Meow Meow!" << std::endl;
}
