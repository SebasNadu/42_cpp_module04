/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:21:15 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:21:16 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <string>

class IMateriaSource {
public:
  virtual ~IMateriaSource(){};

  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};
