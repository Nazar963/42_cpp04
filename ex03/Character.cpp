#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor" << std::endl;
	this->_materias[0]->setType("empty");
	this->_materias[1]->setType("empty");
	this->_materias[2]->setType("empty");
	this->_materias[3]->setType("empty");
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character string param constructor" << std::endl;
}

Character::Character(Character const &copy)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = copy;
}

Character& Character::operator=(Character const &other)
{
	std::cout << "Character assignment operator" << std::endl;
	if (this != &other)
		this->_materias[0] = other._materias[0];
		this->_materias[1] = other._materias[1];
		this->_materias[2] = other._materias[2];
		this->_materias[3] = other._materias[3];
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
		if (this->_materias[i]->getType() == "empty")
			this->_materias[i]->setType(m->getType());
		break ;
	}
}

void	Character::unequip(int idx)
{
	this->_materias[idx]->setType("empty");
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && this->_materias[idx]->getType() != "empty")
		_materias[idx]->use(target);
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
}