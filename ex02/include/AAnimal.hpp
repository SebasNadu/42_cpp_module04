/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:35 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:14:27 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AAnimal {
public:
  AAnimal(void);
  AAnimal(AAnimal const &src);
  AAnimal(std::string const &type);
  virtual ~AAnimal(void);

  AAnimal &operator=(AAnimal const &rhs);

  virtual void makeSound(void) const = 0;
  std::string getType(void) const;

protected:
  std::string type;
};
