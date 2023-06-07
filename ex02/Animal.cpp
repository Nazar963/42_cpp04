#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal deep copy contructor" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(Animal const &other)
{
	std::cout << "assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}