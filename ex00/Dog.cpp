#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "Dog deep copy contructor" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << "assignment operator" << std::endl;
	if (this != &other)
	{
		this->_type = other.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->_type);
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}