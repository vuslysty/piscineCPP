NAME = ex02

FLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp Base.cpp A.cpp B.cpp C.cpp

INC	 =	Base.hpp A.hpp B.hpp C.hpp

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