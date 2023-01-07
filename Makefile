# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <shiro@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:10:09 by marvin            #+#    #+#              #
#    Updated: 2023/01/07 14:05:33 by nsion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlen.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM = rm -f

OBJS	= $(SRCS:.c=.o)

all: ${NAME}

.c.o	:
	${CC} -I. -o $@ -c $? ${CFLAGS}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all
