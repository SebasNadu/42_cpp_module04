#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
public:
  Character();
  Character(Character const &src);
  Character(std::string const &name);
  ~Character();

  Character &operator=(Character const &rhs);

  std::string const &getName() const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);

private:
  static int const _maxInventory = 4;
  AMateria *_inventory[_maxInventory];
  std::string _name;

  void _initInventory();
  void _deleteInventory();
};
