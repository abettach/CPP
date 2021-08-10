NAME = War
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp	\
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	./War

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) War

re : fclean all