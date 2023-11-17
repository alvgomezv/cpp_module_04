#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	Ice* ice = new Ice();
	src->learnMateria(ice);
	delete ice;
	Cure* cure = new Cure();
	src->learnMateria(cure);
	delete cure;

	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* save; 
	tmp = src->createMateria("ice");
	save = tmp; //we save the first materia to delete it later after we unequip it
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	//inventory is full
	AMateria* save2;
	tmp = src->createMateria("ice");
	save2 = tmp;
	me->equip(tmp);
	delete save2;

	ICharacter* bob = new Character("bob");
	ICharacter* peter;
	peter = me;
	ICharacter* juan(peter);


	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	peter->use(3, *me);
	juan->use(3, *me);

	// When we use unequip, we don't delete the materia from the inventory
	me->unequip(0);
	delete save;
	me->use(0, *bob);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}