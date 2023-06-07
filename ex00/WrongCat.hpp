#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	_type;
	public:
		WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat& operator=(WrongCat const &other);

		std::string	getType() const;
		void	makeSound() const;

		~WrongCat();
};

#endif