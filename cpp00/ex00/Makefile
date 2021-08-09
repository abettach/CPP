NAME	= megaphone
SRCS	= megaphone.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -I.

OBJS			= $(SRCS:.cpp=.o)
all:
	$(NAME)

$(NAME):$(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

re:	fclean $(NAME)

test:$(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone
clean:
				rm -rf $(OBJS)
fclean:			clean
				rm -rf $(NAME)