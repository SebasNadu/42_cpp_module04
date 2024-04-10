/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:39 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:22:40 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
