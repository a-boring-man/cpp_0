# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 11:26:49 by jrinna            #+#    #+#              #
#    Updated: 2023/07/18 14:51:54 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := Contact.cpp main.cpp PhoneBook.cpp
OBJ := ${SRC:.cpp=.o}
INC := Contact.hpp PhoneBook.hpp
CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := My_Awesome_PhoneBook

all : ${NAME}

${NAME} : $(OBJ)
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${INC} Makefile
	${CC} ${CFLAGS} -c $< -o $@ -I.

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean