SRCS = srcs/main.cpp srcs/Animal.cpp srcs/Dog.cpp srcs/Cat.cpp srcs/WrongCat.cpp srcs/WrongAnimal.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex00

CC = c++

CPP_FLAGS = -Wall -Wextra -Werror  -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp	
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re