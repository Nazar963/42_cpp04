#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Contructor" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(Brain const &other)
{
	std::cout << "Brain assignment operator" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}