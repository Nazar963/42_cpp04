#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal& operator=(WrongAnimal const &other);

		std::string	getType() const;
		void	makeSound() const;

		virtual ~WrongAnimal();
};

#endif