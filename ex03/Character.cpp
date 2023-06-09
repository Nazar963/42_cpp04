#include "Character.hpp"

Character::Character()
{
	// std::cout << "Character constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	// std::cout << "Character string param constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(Character const &copy)
{
	// std::cout << "Character copy constructor" << std::endl;
	*this = copy;
}

Character& Character::operator=(Character const &other)
{
	std::cout << "Character assignment operator" << std::endl;
	if (this != &other)
	{
		this->_materias[0] = other._materias[0];
		this->_materias[1] = other._materias[1];
		this->_materias[2] = other._materias[2];
		this->_materias[3] = other._materias[3];
		this->_name = other._name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	static int index = 0;
	if (this->_materias[idx] != NULL)
	{
		this->_materias[idx] = NULL;
		index++;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && this->_materias[idx])
		_materias[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	// std::cout << "Character destructor" << std::endl;
}