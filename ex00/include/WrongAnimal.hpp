/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:36 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:07:39 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal {
public:
  WrongAnimal(void);
  WrongAnimal(WrongAnimal const &src);
  WrongAnimal &operator=(WrongAnimal const &rhs);
  WrongAnimal(std::string const &type);
  ~WrongAnimal(void);

  void makeSound(void) const;
  std::string getType(void) const;

protected:
  std::string type;
};
