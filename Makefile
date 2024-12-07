NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_unsigned.c ft_hexa.c ft_hexa_upper.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_printpointer.c ft_pointer_to_hexa.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
