/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:25 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/10 16:45:20 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

void testExample(void) {
  std::cout << "\n*********************************************\n";
  std::cout << "*               Example Test                *\n";
  std::cout << "*********************************************\n" << std::endl;

  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
}

void testCharacter(void) {
  std::cout << "\n*********************************************\n";
  std::cout << "*              Character Test               *\n";
  std::cout << "*********************************************" << std::endl;

  std::cout << "\nCreating 6 Materials..." << std::endl;
  AMateria *m1 = new Ice();
  AMateria *m2 = new Ice();
  AMateria *m3 = new Ice();
  AMateria *m4 = new Cure();
  AMateria *m5 = new Cure();
  AMateria *m6 = new Cure();
  std::cout << "\nCrating a Character 'Alice'..." << std::endl;
  Character *alice = new Character("Alice");
  alice->displayInventory();
  std::cout << "\nEquiping 3 materials: m1, m2 and NULL..." << std::endl;
  alice->equip(m1);
  alice->equip(m2);
  alice->equip(NULL);
  alice->displayInventory();

  std::cout << "\nNew Character aliceClone (Deep Copy).." << std::endl;
  Character *aliceClone = new Character(*alice);
  std::cout << "\nChanging aliceClone name from: " << aliceClone->getName()
            << " to: AliceClone" << std::endl;
  aliceClone->setName("AliceClone");
  alice->displayInventory();
  aliceClone->displayInventory();
  alice->equip(m3);
  alice->displayInventory();
  aliceClone->displayInventory();
  std::cout << "\nDeleting aliceClone..." << std::endl;
  delete aliceClone;

  std::cout << "\nOverload alice inventory with m4, m5 and m6 ..." << std::endl;
  alice->displayInventory();
  alice->equip(m4);
  alice->equip(m5);
  alice->equip(m6);
  alice->displayInventory();

  std::cout << "\nUnequip items ..." << std::endl;
  alice->unequip(-1);
  alice->unequip(99);
  alice->unequip(4);
  alice->unequip(2);
  alice->displayInventory();
  alice->equip(m5);
  alice->displayInventory();
  alice->unequip(1);
  alice->unequip(0);
  alice->displayInventory();
  alice->unequip(0);

  std::cout << "\nDeleting alice..." << std::endl;
  delete alice;

  std::cout << "\nDeleting materials..." << std::endl;
  delete m1;
  delete m2;
  delete m3;
  // m4 and m5 are already deleted by alice
  // delete m4;
  // delete m5;
  delete m6;
}

void testMateriaSource(void) {
  std::cout << "\n*********************************************\n";
  std::cout << "*            MateriaSource Test             *\n";
  std::cout << "*********************************************" << std::endl;

  std::cout << "\nCreating a MateriaSource 'source'..." << std::endl;
  MateriaSource *source = new MateriaSource();
  source->displayMaterials();

  std::cout << "\nMateria Source learning 3 materials: Cure, Ice, NULL"
            << std::endl;
  source->learnMateria(new Cure());
  source->learnMateria(new Ice());
  source->learnMateria(NULL);
  source->displayMaterials();

  std::cout << "\nMateria source cloning (deep copy)..." << std::endl;
  MateriaSource *sourceClone = new MateriaSource(*source);
  std::cout << "source:\n";
  source->displayMaterials();
  std::cout << "sourceClone:\n";
  sourceClone->displayMaterials();
  std::cout << "source learning a new Cure..." << std::endl;
  source->learnMateria(new Cure());
  std::cout << "source:\n";
  source->displayMaterials();
  std::cout << "sourceClone:\n";
  sourceClone->displayMaterials();
  std::cout << "Deleting sourceClone..." << std::endl;
  delete sourceClone;

  std::cout << "\nMateria Source learning to many materials..." << std::endl;
  source->displayMaterials();
  source->learnMateria(new Ice());
  source->learnMateria(new Cure());
  source->displayMaterials();

  std::cout << "\nCreating new materials..." << std::endl;
  AMateria *m1 = source->createMateria("diamond");
  if (m1 == NULL)
    std::cout << "Materia was not created." << std::endl;
  else {
    std::cout << "Materia created type: " << m1->getType() << std::endl;
    delete m1;
  }
  AMateria *m2 = source->createMateria("ice");
  if (m2 == NULL)
    std::cout << "Materia was not created." << std::endl;
  else {
    std::cout << "Materia created type: " << m2->getType() << std::endl;
    delete m2;
  }
  AMateria *m3 = source->createMateria("cure");
  if (m3 == NULL)
    std::cout << "Materia was not created." << std::endl;
  else {
    std::cout << "Materia created type: " << m3->getType() << std::endl;
    delete m3;
  }

  std::cout << "\nDeleting source..." << std::endl;
  delete source;
}

void testPokemonBattle(void) {
  std::cout << "\n*********************************************\n";
  std::cout << "*             PokemonBattle Test              *\n";
  std::cout << "*********************************************" << std::endl;

  std::cout << std::endl << "\nCreating MateriaSource..." << std::endl;
  MateriaSource *source = new MateriaSource();
  source->learnMateria(new Cure());
  source->learnMateria(new Ice());

  std::cout << "MateriaSource creating 6 items to use, and set in an array..."
            << std::endl;
  AMateria *materias[7];
  materias[6] = NULL;

  for (int i = 0; i < 6; i++) {
    if (i % 2)
      materias[i] = source->createMateria("ice");
    else
      materias[i] = source->createMateria("cure");
  }

  std::cout << "\nCreating 2 pokemons..." << std::endl;
  ICharacter *pikachu = new Character("Pikachu");
  std::cout << pikachu->getName() << " I choose you!" << std::endl;
  Character *charmander = new Character("Charmander");
  std::cout << charmander->getName() << " I choose you!" << std::endl;

  std::cout << "\nEquiping the pokemons..." << std::endl;
  std::srand(std::time(0));
  for (int i = 0; i < 6; i++) {
    if (std::rand() % 2)
      pikachu->equip(materias[i]);
    else
      charmander->equip(materias[i]);
  }

  int pikachuLife(10);
  int charmanderLife(10);

  std::cout << "\n3, 2, 1, 0! Fight!\n" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "Round " << i + 1 << "!\n";
    if (std::rand() % 2) {
      if (std::rand() % 2) {
        pikachu->use(std::rand() % 4, *charmander);
        charmanderLife--;
      } else {
        pikachu->use(std::rand() % 4, *pikachu);
        pikachuLife++;
      }
    } else {
      if (std::rand() % 2) {
        charmander->use(std::rand() % 4, *pikachu);
        pikachuLife--;
      } else {
        charmander->use(std::rand() % 4, *charmander);
        charmanderLife++;
      }
    }
  }

  if (pikachuLife > charmanderLife) {
    std::cout << "\n*********************************************\n";
    std::cout << "*               Pikachu Won!!                 *\n";
    std::cout << "*********************************************" << std::endl;
  } else {
    std::cout << "\n*********************************************\n";
    std::cout << "*              Charmander Won!!               *\n";
    std::cout << "*********************************************" << std::endl;
  }

  std::cout << "\nDeleting pokemons..." << std::endl;
  delete pikachu;
  delete charmander;

  std::cout << "\nDeleting MateriaSource..." << std::endl;
  delete source;
}

int main() {
  testExample();
  testCharacter();
  testMateriaSource();
  testPokemonBattle();
  return 0;
}
