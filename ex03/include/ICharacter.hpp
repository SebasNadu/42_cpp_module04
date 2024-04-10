/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:21:24 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:24:52 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>

class AMateria;

class ICharacter {
public:
  virtual ~ICharacter(){};

  virtual std::string const &getName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};
