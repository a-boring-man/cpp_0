# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 10:00:59 by jrinna            #+#    #+#              #
#    Updated: 2022/09/05 10:22:15 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := megaphone.cpp
OBJ := ${SRC:.c=.o}
CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := megaphone

${NAME} : ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}
	
re : fclean all

.PHONY : all re clean fclean