/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:26 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:25:09 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <string>

class ICharacter;

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
