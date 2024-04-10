/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:22:46 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:22:47 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  MateriaSource(MateriaSource const &src);
  ~MateriaSource();

  MateriaSource &operator=(MateriaSource const &rhs);

  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);

  void displayMaterials() const;

private:
  static int const _maxMaterials = 4;
  AMateria *_materials[_maxMaterials];

  void _initMaterials();
  void _deleteMaterials();
};
