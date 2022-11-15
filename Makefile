NAME = libft.a
SRC	= ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strtrim.c ft_strdup.c ft_strlen.c ft_isalnum.c ft_isprint.c \
ft_memmove.c ft_strjoin.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c \
ft_strlcat.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlcpy.c \
ft_strrchr.c ft_toupper.c ft_split.c ft_itoa.c\

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