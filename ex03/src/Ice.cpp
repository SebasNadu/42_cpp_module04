#include "Ice.hpp"
#include "colors.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
  std::cout << BLU << "Ice default constructor called" << CRESET << std::endl;
}

Ice::Ice(Ice const &src) {
  std::cout << BLU << "Ice copy constructor called" << CRESET << std::endl;
  *this = src;
}

Ice::~Ice() {
  std::cout << BLU << "Ice destructor called" << CRESET << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {
  std::cout << BLU << "Ice assignation operator called" << CRESET << std::endl;
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

AMateria *Ice::clone() const {
  std::cout << YEL << "Ice clone called" << CRESET << std::endl;
  AMateria *clone = new Ice();
  return (clone);
}

void Ice::use(ICharacter &target) {
  std::cout << GRN << "* shoots an ice bolt at " << target.getName() << " *"
            << CRESET << std::endl;
}
