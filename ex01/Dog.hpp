#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	_type;
		Brain*		_brain;
	
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog(void);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif

