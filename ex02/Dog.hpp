#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	_type;
		Brain* brain;
	public:
		Dog();
		Dog(Dog const &copy);
		Dog& operator=(Dog const &other);

		void	makeSound() const;
		std::string	getType() const;
		void	loco();

		~Dog();
};

#endif