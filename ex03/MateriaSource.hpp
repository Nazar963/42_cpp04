#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		Character();
		Character(std::string name);
		Character(Character const &copy);
		Character& operator=(Character const &other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif