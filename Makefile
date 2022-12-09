NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

M_SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_memchr.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_calloc.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

B_SRCS = ft_lstsize_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c

M_OBJS = $(M_SRCS:%.c=%.o)
B_OBJS = $(B_SRCS:%.c=%.o)

ifdef WITH_BONUS
	OBJS = $(M_OBJS) $(B_OBJS)
else
	OBJS = $(M_OBJS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -I .

bonus:
	make WITH_BONUS=1 all

clean:
	$(RM) $(M_OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re