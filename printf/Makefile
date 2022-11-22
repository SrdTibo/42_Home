NAME = libftprintf.a
SRC	= ft_print_c.c\

OBJ	= $(SRC:.c=.o)

all : 		$(NAME)

$(NAME) : 	$(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :	clean
	rm -f $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
