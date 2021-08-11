NAME = karen
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp	\
		Karen.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	@./Karen $1
	@make fclean --no-print-directory

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) karen

re : fclean all