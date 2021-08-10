NAME	= megaphone
SRCS	= megaphone.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -I.

OBJS	= $(SRCS:.cpp=.o)
all:
	$(NAME)

$(NAME):$(OBJS)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

re:	fclean $(NAME)

test:$(NAME)
	@make re --no-print-directory
	@make clean --no-print-directory
	@echo
	./megaphone "shhhhh... I think the students are asleep..."
	@echo
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo
	./megaphone
	@make fclean --no-print-directory
clean:
		@rm -rf $(OBJS)
fclean:	clean
		@rm -rf $(NAME)