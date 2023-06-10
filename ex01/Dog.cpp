#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy) , _type(copy._type)
{
	std::cout << "Dog deep copy contructor" << std::endl;
	this->brain = new Brain(*copy.brain);
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
	delete this->brain;
}