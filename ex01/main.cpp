#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	Animal *animals[6];

	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (int i = 3; i < 6; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 6; i++)
		delete animals[i];

	Cat *cat = new Cat();
	cat->getBrain()->setIdea("---La vida es bella");
	cat->getBrain()->printIdeas();

	// falta el deep copy
	Cat *cat2 = new Cat(*cat);
	cat2->getBrain()->printIdeas();


	return 0;
}