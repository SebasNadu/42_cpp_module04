/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:35 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:06:36 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal {
public:
  Animal(void);
  Animal(Animal const &src);
  Animal(std::string const &type);
  virtual ~Animal(void);

  Animal &operator=(Animal const &rhs);

  virtual void makeSound(void) const;
  std::string getType(void) const;

protected:
  std::string type;
};
