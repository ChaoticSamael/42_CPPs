.PHONY: all, clean, fclean, re, debug

NAME = philo
FLAGS = -Wall -Werror -Wextra
# DEBUG = -g3 -pthread
# DEBUG = -g3 -fsanitize=address

all: $(NAME)

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:%.c=obj/%.o)

$(NAME): $(OBJ)
	c++ $^ -o $(NAME) 
#if hide -> @ before command




obj/%.o: %.c
	mkdir -p obj
	cc $(FLAGS) -c $^ -o $@

clean:
	rm -fr $(OBJ) | rm -rf obj/

fclean: clean
	rm -fr $(NAME)

re: fclean all

# debug: 
# 	cc $(FLAGS) $(DEBUG) $(SRC) -o $(NAME)

FORCE:

