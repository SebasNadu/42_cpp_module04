#include "MateriaSource.hpp"
#include "colors.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
  std::cout << BLU << "MateriaSource default constructor called" << CRESET
            << std::endl;
  this->_initMaterials();
}

MateriaSource::MateriaSource(MateriaSource const &src) {
  std::cout << BLU << "MateriaSource copy constructor called" << CRESET
            << std::endl;
  *this = src;
}

MateriaSource::~MateriaSource() {
  std::cout << BLU << "MateriaSource destructor called" << CRESET << std::endl;
  this->_deleteMaterials();
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
  std::cout << BLU << "MateriaSource assignation operator called" << CRESET
            << std::endl;
  if (this != &rhs) {
    this->_deleteMaterials();
    for (int i = 0; i < this->_maxMaterials; i++) {
      this->_materials[i] = rhs._materials[i]->clone();
    }
  }
  return *this;
}

void MateriaSource::_initMaterials() {
  for (int i = 0; i < this->_maxMaterials; i++) {
    this->_materials[i] = NULL;
  }
}

void MateriaSource::_deleteMaterials() {
  for (int i = 0; i < this->_maxMaterials; i++) {
    if (this->_materials[i] != NULL) {
      delete this->_materials[i];
    }
  }
}

void MateriaSource::learnMateria(AMateria *m) {
  if (m == NULL) {
    std::cout << RED << "MateriaSource: Cannot learn a NULL materia" << CRESET
              << std::endl;
    return;
  }
  for (int i = 0; i < this->_maxMaterials; i++) {
    if (this->_materials[i] == NULL) {
      this->_materials[i] = m;
      std::cout << GRN << "MateriaSource: Materia " << m->getType()
                << " learned at index " << i << CRESET << std::endl;
      return;
    }
  }
  std::cout << RED << "MateriaSource: The materials are full" << CRESET
            << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  if (type.empty()) {
    std::cout << RED << "MateriaSource: Cannot create a materia with an "
              << "empty type" << CRESET << std::endl;
  }
  for (int i = 0; i < this->_maxMaterials; i++) {
    if (this->_materials[i] != NULL && this->_materials[i]->getType() == type) {
      std::cout << GRN << "MateriaSource: Materia " << type << " created"
                << CRESET << std::endl;
      return this->_materials[i]->clone();
    }
  }
  std::cout << RED << "MateriaSource: Materia " << type << " not found"
            << CRESET << std::endl;
  return NULL;
}
