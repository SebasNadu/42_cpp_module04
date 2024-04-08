/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:17 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 15:06:19 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
  // the pointer itself is const, not the object it points to
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << meta->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  meta = new Cat();
  std::cout << meta->getType() << " " << std::endl;
  meta->makeSound();
  delete meta;
  delete i;
  delete j;

  std::cout << "-------------------" << std::endl;
  const WrongAnimal *wrong = new WrongAnimal();
  std::cout << wrong->getType() << " " << std::endl;
  wrong->makeSound();
  delete wrong;
  wrong = new WrongCat();
  wrong->makeSound();
  std::cout << wrong->getType() << " " << std::endl;
  delete wrong;
  std::cout << "-------------------" << std::endl;

  return 0;
}
