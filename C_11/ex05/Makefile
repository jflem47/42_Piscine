NAME 	= do-op
SRCS 	= srcs/ft_add.c srcs/ft_div.c srcs/ft_mod.c srcs/ft_multi.c \
			srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_sub.c srcs/ft_doop.c \
			srcs/ft_atoi.c
OBJS 	= $(SRCS:.c=.o)
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM		= rm -f

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I includes

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all