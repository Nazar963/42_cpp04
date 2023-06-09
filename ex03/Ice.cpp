#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	// std::cout << "Ice copy constructor" << std::endl;
	*this = copy;
}

Ice& Ice::operator=(Ice const &other)
{
	// std::cout << "Ice assignment operator" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const & Ice::getType() const
{
	return (this->type);
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor" << std::endl;
}