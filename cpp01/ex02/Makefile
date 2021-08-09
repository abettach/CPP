NAME = main
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	./main

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) main

re : fclean all