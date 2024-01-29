CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
OBJS = $(SRCS:.cpp=.o)
SRCS = main.cpp Contact.cpp PhoneBook.cpp

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
