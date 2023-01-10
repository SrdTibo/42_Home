NAME = so_long.out
CFLAGS = -Wall -Wextra -Werror
SRC	= 	main.c verification_basic.c verification_wall.c gnl/get_next_line_utils.c gnl/get_next_line.c\

OBJ	= $(SRC:.c=.o)

all : 		$(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
	
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean :	clean
	rm -f $(NAME) so_long.out

re :		fclean all

.PHONY :	all clean fclean re
