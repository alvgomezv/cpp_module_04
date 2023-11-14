#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	//AAnimal *a = new AAnimal();
	AAnimal *b = new Dog();
	AAnimal *c = new Cat();

	delete b;
	delete c;

	return 0;
}