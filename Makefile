NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	ft_strlen \
		ft_isalpha \
		ft_isdigit \
		ft_memset \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_strchr \
		ft_strrchr \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strlcpy \
		ft_strnstr \
		ft_atoi \
		ft_bzero \
		ft_strdup \
		ft_memcpy \
		ft_memmove \
		ft_strlcat \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_memset \
		ft_putchar_fd \
		ft_putendl_fd \
		ft_putstr_fd \
		ft_putnbr_fd \
		ft_strjoin \
		ft_calloc \
		ft_substr \
		ft_strmapi \
		ft_striteri \
		ft_itoa \
		ft_strtrim \
		ft_split \

#FILES_B =	ft_lstnew \
	  		ft_lstadd_front \
	  		ft_lstsize \
	  		ft_lstlast \
	  		ft_lstadd_back \
	  		ft_lstdelone \
	  		ft_lstclear \
	  		ft_lstiter \
	  		ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
#SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

#bonus: $(OBJS_B)
#	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
