NAME = megaphone

FLAGS = -Wall -Wextra -Werror

SRCS =	megaphone.cpp

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building of magaphone..."
	@clang++ -o $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all