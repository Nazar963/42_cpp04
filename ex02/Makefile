CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
MAIN = brain

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Animal.hpp Cat.hpp Dog.hpp Brain.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re