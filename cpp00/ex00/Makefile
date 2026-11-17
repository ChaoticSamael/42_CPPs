.PHONY: all, clean, fclean, re, debug

NAME = megaphone
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=obj/%.o)

$(NAME): $(OBJ)
	c++ $(FLAGS) $^ -o $(NAME) 
#if hide -> @ before command


obj/%.o: %.cpp
	mkdir -p obj
	c++ $(FLAGS) -c $^ -o $@

clean:
	rm -fr $(OBJ) | rm -rf obj/

fclean: clean
	rm -fr $(NAME)

re: fclean all

# debug: 
# 	cc $(FLAGS) $(DEBUG) $(SRC) -o $(NAME)

FORCE:

