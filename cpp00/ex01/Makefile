.PHONY: all, clean, fclean, re, debug

NAME = phonebook
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:%.cpp=obj/%.o)

$(NAME): $(OBJ)
	c++ $^ -o $(NAME) 
#if hide -> @ before command




obj/%.o: %.cpp
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

