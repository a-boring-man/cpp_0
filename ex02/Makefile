# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 11:10:03 by jrinna            #+#    #+#              #
#    Updated: 2022/09/07 16:02:20 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := Account.cpp tests.cpp
INC := Account.hpp
OBJ := ${SRC:.cpp=.o}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := my_dream_job

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${INC} Makefile
	${CC} ${CFLAGS} -c $< -o $@ -I

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean