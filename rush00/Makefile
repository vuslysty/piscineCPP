NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp\
		Background.cpp\
		Blaster.cpp\
		Character.cpp\
		Enemy.cpp\
		Object.cpp\
		Enemys/FalconShip.cpp\
		Enemys/FireflyShip.cpp\
		Enemys/SpaceballShip.cpp\
		general/Game.cpp\
		Lists/ListBlast.cpp\
		Lists/ListEnemy.cpp

INC	 =	Background.hpp\
		Blaster.hpp\
		Character.hpp\
		Enemy.hpp\
		Object.hpp\
		Enemys/FalconShip.hpp\
		Enemys/FireflyShip.hpp\
		Enemys/SpaceballShip.hpp\
		general/Game.hpp\
		Lists/ListBlast.hpp\
		Lists/ListEnemy.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building of $(NAME)..."
	@clang++ -o $(NAME) $(OBJ) -lncurses

%.o: %.cpp $(INC)
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all