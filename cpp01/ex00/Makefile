NAME = zombie
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS =	Zombie.cpp	\
		main.cpp \
		newZombie.cpp \
		randomChump.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	./zombie

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) zombie

re : fclean all