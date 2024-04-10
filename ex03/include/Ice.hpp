/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:32 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:22:33 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
