CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero \
ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp\
ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr)
OBJ = $(CFILES:%.c=%.o)
HEADER = libft.h
AR = ar
ARFLAGS = -rc
RM = rm -f

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(HEADER)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re