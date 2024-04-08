/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:19 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:22 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  WrongCat(void);
  WrongCat(WrongCat const &src);
  WrongCat &operator=(WrongCat const &rhs);
  ~WrongCat(void);

  void makeSound(void) const;
};
