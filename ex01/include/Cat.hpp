/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 16:26:22 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
  Cat(void);
  Cat(Cat const &src);
  ~Cat(void);

  Cat &operator=(Cat const &rhs);

  void makeSound(void) const;
  Brain *getBrain(void) const;

private:
  Brain *_brain;
};
