/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:47 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:18:56 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
  Dog(void);
  Dog(Dog const &src);
  ~Dog(void);

  Dog &operator=(Dog const &rhs);

  Brain *getBrain(void) const;
  void makeSound(void) const;

private:
  Brain *_brain;
};
