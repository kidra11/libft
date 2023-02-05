# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsion <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:23:02 by nsion             #+#    #+#              #
#    Updated: 2023/02/05 15:02:29 by nsion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -f

OBJS	= $(SRCS:.c=.o)

all: ${NAME}

.c.o	:
	${CC} -I. -o $@ -c $? ${CFLAGS}

${NAME}	: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean	:
	${RM} ${OBJS}

fclean	:	clean
	${RM} ${NAME}


re	: fclean all
