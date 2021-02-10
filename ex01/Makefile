# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 10:33:41 by kbatwoma          #+#    #+#              #
#    Updated: 2021/02/10 13:21:43 by kbatwoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook_80s
CC 			= clang++
FLAGS 		= -Wall -Wextra -Werror
HEADER_DIR	= ./
SRCS_DIR    = ./
SRCS_LIST   =	phonebook_80s.cpp \
				PhonebookClass.cpp \
				ContactClass.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_LIST))
OBJS		= $(patsubst %.cpp, %.o, $(SRCS))
D_FILES		= $(patsubst %.cpp, %.d, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@ 

%.o : %.cpp
	$(CC) $(FLAGS)  -MD -c $< -o $@ 
	 
-include $(D_FILES)

clean:
	rm -rf $(OBJS) $(D_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re norm
