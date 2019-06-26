NAME = replace

FLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building of &(NAME)..."
	@clang++ -o $(NAME) $(OBJ)

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all