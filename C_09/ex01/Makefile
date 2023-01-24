SRCS	=	srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c \
			srcs/ft_swap.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I includes

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all