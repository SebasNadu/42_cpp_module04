/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:21:05 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:21:07 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "colors.hpp"
#include <iostream>

AMateria::AMateria() : _type("default") {
  std::cout << BLU << "AMateria default constructor called" << CRESET
            << std::endl;
}

AMateria::AMateria(AMateria const &src) : _type(src._type) {
  std::cout << BLU << "AMateria copy constructor called" << CRESET << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
  std::cout << BLU << "AMateria type constructor called" << CRESET << std::endl;
}

AMateria::~AMateria() {
  std::cout << BLU << "AMateria destructor called" << CRESET << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
  std::cout << BLU << "AMateria assignation operator called" << CRESET
            << std::endl;
  if (this != &rhs)
    this->_type = rhs._type;
  return *this;
}

std::string const &AMateria::getType() const { return this->_type; }

void AMateria::use(ICharacter &target) {
  std::cout << RED << "* Some unknown materia is being used against "
            << target.getName() << " *" << CRESET << std::endl;
}
