#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(Cure const &src);
  virtual ~Cure();

  Cure &operator=(Cure const &rhs);

  Cure *clone() const;
  void use(ICharacter &target);
};
