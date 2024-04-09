#pragma once

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  MateriaSource(MateriaSource const &src);
  ~MateriaSource();

  MateriaSource &operator=(MateriaSource const &rhs);

  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);

private:
  static int const _maxMaterials = 4;
  AMateria *_materials[_maxMaterials];

  void _initMaterials();
  void _deleteMaterials();
};
