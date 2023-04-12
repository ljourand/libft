SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_split.c
OBJS	= ${SRCS:.c=.o}
BNS		= ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBNS	= ${BNS:.c=.o}
NAME	= libft.a
HEADER	= libft.h

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} ${HEADER}
	ar -rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	rm -f ${OBJS} ${OBNS}

fclean:	clean
	rm -f ${NAME}

bonus: ${OBJS} ${OBNS}
	ar -rcs ${NAME} ${OBJS} ${OBNS}

re:	fclean all

.PHONY:	all clean fclean re bonus
