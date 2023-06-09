#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(std::string name) : _name(name)
{
	// std::cout << "MateriaSource param constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	// std::cout << "MateriaSource copy constructor" << std::endl;
	*this = copy;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &other)
{
	// std::cout << "MateriaSource assignment operator" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (other._materia[i] != NULL)
				this->_materia[i] = other._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (materia)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] == NULL)
			{
				this->_materia[i] = materia;
				break ;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}