CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $@ $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS) $(NAME) 

fclean : clean
	@rm -f $(NAME)

re : fclean all 

.PHONY: clean re fclean 
