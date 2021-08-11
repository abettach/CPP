NAME = replace
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp	\
		replace.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	@./replace
	@make fclean --no-print-directory

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) replace

re : fclean all