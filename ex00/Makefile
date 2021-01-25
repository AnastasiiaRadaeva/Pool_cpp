
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/24 18:08:41 by kbatwoma          #+#    #+#              #
#    Updated: 2021/01/25 11:41:42 by kbatwoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= megaphone
CC 			= clang++
FLAGS 		= -Wall -Wextra -Werror
SRCS_DIR    = ./
SRCS_LIST   = megaphone.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_LIST))
OBJS		= $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re norm