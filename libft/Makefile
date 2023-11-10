CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero \
ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp\
ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split\
ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd)
OBJ = $(CFILES:%.c=%.o)
BONUS_FILES = $(addsuffix .c, ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone\
ft_lstclear ft_lstiter ft_lstmap)
BONUS_OBJ = $(BONUS_FILES:%.c=%.o)
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

bonus: 	$(OBJ) $(BONUS_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus