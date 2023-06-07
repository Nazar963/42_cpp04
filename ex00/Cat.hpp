#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	_type;
	public:
		Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &other);

		std::string	getType() const;
		void	makeSound() const;

		~Cat();
};

#endif