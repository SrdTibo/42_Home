SERVER		=	server.c

CLIENT		=	client.c

FT_PRINTF	= ft_printf/ft_extra_function.c \
				ft_printf/ft_print_c.c \
				ft_printf/ft_print_d.c \
	  			ft_printf/ft_print_i.c \
				ft_printf/ft_print_modulo.c \
				ft_printf/ft_print_p.c \
				ft_printf/ft_print_s.c\
	  			ft_printf/ft_print_u.c \
				ft_printf/ft_print_x.c \
				ft_printf/ft_print_xbis.c \
				ft_printf/ft_printf.c
	
SERVER_OBJ = $(SERVER:.c=.o)

CLIENT_OBJ = $(CLIENT:.c=.o)

FT_PRINTF_OBJ = $(FT_PRINTF:.c=.o)

CC = gcc 

CFLAGS = -Wall -Werror -Wextra 

EXEC_SERVER	=	server

EXEC_CLIENT	=	client

RM = rm -rf

all : $(EXEC_SERVER) $(EXEC_CLIENT)

$(EXEC_SERVER) : $(FT_PRINTF_OBJ) $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(FT_PRINTF_OBJ) $(SERVER_OBJ) -o $(EXEC_SERVER)

$(EXEC_CLIENT) : $(FT_PRINTF_OBJ) $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(FT_PRINTF_OBJ) $(CLIENT_OBJ) -o $(EXEC_CLIENT)


clean :
	$(RM) $(SERVER_OBJ) $(CLIENT_OBJ) $(FT_PRINTF_OBJ)

fclean :	clean
	$(RM) $(EXEC_SERVER) $(EXEC_CLIENT)

re :	fclean all

.PHONY :	all clean fclean re