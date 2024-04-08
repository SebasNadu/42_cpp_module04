/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:30 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:18:35 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
