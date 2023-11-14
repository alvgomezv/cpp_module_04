#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string	_type;
	
	public:
		AAnimal(void);
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		virtual ~AAnimal(void);

		virtual std::string	getType(void) const = 0;
		virtual void		makeSound(void) const = 0;
};

#endif

