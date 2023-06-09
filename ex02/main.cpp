#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	const Dog dog;
	const Cat cat;
	const Animal* boh = new Dog();
	std::cout << boh->getType() << "hello" << std::endl;
	// const Animal boh;
	// std::cout << boh.getType() << "hello" << std::endl;
	return 0;
}
