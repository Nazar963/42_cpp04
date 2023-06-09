CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
MAIN = boh

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re