#pragma once
#include <string>

class Brain {
public:
  Brain(void);
  Brain(Brain const &src);
  ~Brain(void);

  Brain &operator=(Brain const &rhs);

  std::string const &getIdea(int index) const;
  void setIdea(int index, std::string const &idea);

protected:
  static int const _nb_ideas = 100;
  std::string _ideas[_nb_ideas];
};
