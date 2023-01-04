NAME  = libftprintf.a
RM    = rm -f
CC    = gcc
CFLAG = -Wall -Werror -Wextra
SRC   = ft_printf.c ft_putchar.c ft_putstr.c ft_put_ptr.c ft_put_d.c ft_put_i.c ft_put_u.c ft_put_upper_h.c ft_put_lower_h.c
OBJ   = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $^

%.o : %.c
	$(CC) $(CFLAG) -o $@ -c $^
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

re : clean fclean





