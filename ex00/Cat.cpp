#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat deep copy contructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << "assignment operator" << std::endl;
	if (this != &other)
	{
		this->_type = other.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}