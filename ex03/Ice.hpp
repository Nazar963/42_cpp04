#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	type;
	public:
		Ice();
		Ice(Ice const &copy);
		Ice& operator=(Ice const &other);

		std::string const & getType() const;
		Ice* clone() const;
		void use(ICharacter& target);

		~Ice();
};

#endif