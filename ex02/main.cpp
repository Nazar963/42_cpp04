#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	const Dog dog;
	// const Cat cat;
	const Animal* boh = new Dog();

	return 0;
}
