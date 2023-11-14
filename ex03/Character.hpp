#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
		private:
			std::string	_name;
			AMateria*	_inventory[4];

		public:
			Character(void);
			Character(const std::string& name);
			Character(const Character& other);
			Character&	operator=(const Character& other);
			~Character(void);

			std::string const	&getName(void) const;
			// void				equip(AMateria* m);
			// void				unequip(int idx);
			// void				use(int idx, ICharacter& target);
};

#endif

