#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat deep copy contructor" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(WrongCat const &other)
{
	std::cout << "assignment operator" << std::endl;
	if (this != &other)
	{
		this->_type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->_type);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}