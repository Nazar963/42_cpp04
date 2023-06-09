#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria* _materias[4];
		std::string	_name;
		static int	_index;
	public:
		Character();
		Character(std::string name);
		Character(Character const &copy);
		Character& operator=(Character const &other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		~Character();
};

#endif