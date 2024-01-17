CC = g++
FLAG = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
OBJS = $(SRCS:.cpp=.o)
SRCS = megaphone.cpp

%.o: %.cpp
	$(CC) $(FLAG) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: flcean all

.PHONY: all clean fclean re
