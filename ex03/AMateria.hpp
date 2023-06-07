#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(AMateria const &copy);
		AMateria& operator=(AMateria const &other);

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		void	setType(std::string name);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		~AMateria();
};

#endif