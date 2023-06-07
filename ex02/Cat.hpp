#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string	_type;
		Brain* brain;
	public:
		Cat();
		Cat(Cat const &copy);
		Cat& operator=(Cat const &other);

		std::string	getType() const;
		void	makeSound() const;

		~Cat();
};

#endif