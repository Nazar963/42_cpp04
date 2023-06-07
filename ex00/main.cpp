#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	const WrongAnimal *loco = new WrongAnimal();
	const WrongAnimal *zoro = new WrongCat();

	std::cout << zoro->getType() << " " << std::endl;
	loco->makeSound();
	zoro->makeSound();

	delete loco;
	delete zoro;

	return (0);
}
