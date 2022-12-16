NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

FT_PRINTF	= ft_printf/ft_extra_function.c \
				ft_printf/ft_print_c.c \
				ft_printf/ft_print_d.c \
				ft_printf/ft_printf.c \
	  			ft_printf/ft_print_i.c \
				ft_printf/ft_print_modulo.c \
				ft_printf/ft_print_p.c \
				ft_printf/ft_print_s.c\
	  			ft_printf/ft_print_u.c \
				ft_printf/ft_print_x.c \
				ft_printf/ft_print_xbis.c \

CLIENT = client.c

SERVER = server.c

OBJ_FT_PRINTF	= $(FT_PRINTF:.c=.o)

OBJ_CLIENT	= $(CLIENT:.c=.o)

OBJ_SERVER	= $(SERVER:.c=.o)

all : 		$(NAME)
	
$(NAME) : 	$(OBJ_FT_PRINTF) $(OBJ_CLIENT) $(OBJ_SERVER)
	ar -rcs $(NAME) $(OBJ_FT_PRINTF) $(OBJ_CLIENT) $(OBJ_SERVER)

clean :
	rm -rf $(OBJ_FT_PRINTF) $(OBJ_CLIENT) $(OBJ_SERVER)

fclean :	clean
	rm -f $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
