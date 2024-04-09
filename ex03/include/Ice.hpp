#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
  Ice();
  Ice(Ice const &src);
  virtual ~Ice();

  Ice &operator=(Ice const &rhs);

  AMateria *clone() const;
  void use(ICharacter &target);
};
