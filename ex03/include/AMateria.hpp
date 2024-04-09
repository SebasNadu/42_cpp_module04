#pragma once

#include "ICharacter.hpp"
#include <string>

class AMateria {
public:
  AMateria();
  AMateria(AMateria const &other);
  AMateria(std::string const &type);
  virtual ~AMateria();

  AMateria &operator=(AMateria const &rhs);

  std::string const &getType() const;

  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);

protected:
  std::string _type;
};
