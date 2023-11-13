CC = cc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_memchr.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strdup.c \
      ft_memcmp.c \
      ft_strncmp.c \
      ft_calloc.c \
      ft_strnstr.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_atoi.c \
      

OBJ = $(SRC:.c=.o)


#all : $(OUT)
all: $(NAME)

#$(OUT) : $(NAME)
#	gcc -c $^

$(NAME) : $(OBJ) libft.h
	ar rcs $@ $^


%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all