/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:17 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/08 18:27:54 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();

  delete j;
  delete i;

  std::cout << "\n---------------------\n";
  std::cout << "Array of Animals\n" << std::endl;
  AAnimal *animals[10];

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      animals[i] = new Dog();
      animals[i]->makeSound();
    } else {
      animals[i] = new Cat();
      animals[i]->makeSound();
    }
  }

  for (int i = 0; i < 10; i++) {
    delete animals[i];
  }

  std::cout << "\n---------------------\n";
  std::cout << "Cat and Dogs Ideas\n" << std::endl;
  Cat *cat = new Cat();
  Dog *dog = new Dog();
  for (int i = 0; i < 10; i++) {
    cat->getBrain()->setIdea(i, "Cat idea " + std::to_string(i));
    dog->getBrain()->setIdea(i, "Dog idea " + std::to_string(i));
  }

  Cat *catCopy = new Cat(*cat);
  Dog *dogCopy = new Dog(*dog);
  for (int i = 0; i < 10; i++) {
    std::cout << "CatCopy ideas: " << catCopy->getBrain()->getIdea(i)
              << std::endl;
    std::cout << "DogCopy ideas: " << dogCopy->getBrain()->getIdea(i)
              << std::endl;
  }

  for (int i = 0; i < 10; i++) {
    cat->getBrain()->setIdea(i, "Cat new idea " + std::to_string(i));
    dog->getBrain()->setIdea(i, "Dog new idea " + std::to_string(i));
  }

  std::cout << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "Cat ideas: " << cat->getBrain()->getIdea(i) << std::endl;
    std::cout << "Dog ideas: " << dog->getBrain()->getIdea(i) << std::endl;
    std::cout << "CatCopy ideas: " << catCopy->getBrain()->getIdea(i)
              << std::endl;
    std::cout << "DogCopy ideas: " << dogCopy->getBrain()->getIdea(i)
              << std::endl;
  }

  std::cout << "\n";
  delete cat;
  delete catCopy;
  delete dogCopy;
  /*
    std::cout << "\n---------------------\n";
    AAnimal *animal = new AAnimal();
    animal->makeSound();
    delete animal;
  */
  return 0;
}
