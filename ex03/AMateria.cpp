#include "AMateria.hpp"

AMateria::AMateria() : type("boh")
{
	// std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	// std::cout << "AMateria copy constructor" << std::endl;
	*this = copy;
}

AMateria& AMateria::operator=(AMateria const &other)
{
	// std::cout << "AMateria assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria string param constructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::setType(std::string name)
{
	this->type = name;
}

void	AMateria::use(ICharacter& target)
{
	// std::cout << "you shouldnt read me" << std::endl;
	target.getName();
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor" << std::endl;
}