/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:47 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:50 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog(void);
  Dog(Dog const &src);
  ~Dog(void);
  Dog &operator=(Dog const &rhs);

  void makeSound(void) const;
};
