# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <shiro@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:10:09 by marvin            #+#    #+#              #
#    Updated: 2022/12/14 15:29:46 by nsion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlen.c ft_strlcpy.c

NAME	= libft.a

OBJS	= $(SRCS:.c=.o)

HEADERS	= includes/

.c.o	:
	gcc -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	gcc -Wall -Wextra -Werror -I ${NAME} ${OBJS}

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all
