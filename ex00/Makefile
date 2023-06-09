CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
MAIN = animal

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re