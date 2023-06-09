#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_materia[4];
		std::string	_name;
	public:
		MateriaSource();
		MateriaSource(std::string name);
		MateriaSource(MateriaSource const &copy);
		MateriaSource& operator=(MateriaSource const &other);

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

		~MateriaSource();
};

#endif