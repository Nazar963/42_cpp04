#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &copy);
		Animal& operator=(Animal const &other);

		virtual std::string	getType() const;
		virtual void	makeSound() const;

		virtual ~Animal();
};

#endif