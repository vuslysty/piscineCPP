NAME = account

FLAGS = -Wall -Wextra -Werror

SRCS =	Account.class.cpp tests.cpp

INC = Account.class.hpp

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building of $(NAME)..."
	@clang++ -o $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $< $(INC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all