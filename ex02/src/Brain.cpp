#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {
  std::cout << "Brain copy constructor called" << std::endl;
  *this = src;
}

Brain &Brain::operator=(Brain const &rhs) {
  std::cout << "Brain copy assignment operator called" << std::endl;
  if (this != &rhs)
    for (int i = 0; i < this->_nb_ideas; i++)
      this->_ideas[i] = rhs._ideas[i];
  return *this;
}

std::string const &Brain::getIdea(int index) const {
  if (index < 0)
    index = 0;
  return this->_ideas[index % (this->_nb_ideas - 1)];
}

void Brain::setIdea(int index, std::string const &idea) {
  if (index < 0)
    return;
  this->_ideas[index % (this->_nb_ideas - 1)] = idea;
}

Brain::~Brain(void) { std::cout << "Brain destructor called" << std::endl; }
