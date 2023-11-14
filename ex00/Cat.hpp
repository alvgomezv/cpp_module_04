#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	_type;
	
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat(void);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif

