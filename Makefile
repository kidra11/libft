# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <shiro@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:10:09 by marvin            #+#    #+#              #
#    Updated: 2022/12/07 17:29:04 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_strlcat.c srcs/ft_strlen.c srcs/ft_strlcpy.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

HEADERS	= includes/

.c.o	:
	gcc -Wall -Wextra -Werror

${NAME} : ${OBJS}
	ar ${NAME} ${OBJS}

all : &{NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
