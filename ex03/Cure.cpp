#include "Cure.hpp"

Cure::Cure() : type("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(Cure const &copy)
{
	std::cout << "Cure copy constructor" << std::endl;
	*this = copy;
}

Cure& Cure::operator=(Cure const &other)
{
	std::cout << "Cure assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const & Cure::getType() const
{
	return (this->type);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *"<< std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}