NAME = convert

FLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp\
		Convert.cpp\
		Fsm/conditions.cpp\
		Fsm/finiteStates


INC	 =	Convert.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building of $(NAME)..."
	@clang++ -o $(NAME) $(OBJ)

%.o: %.cpp $(INC)
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all