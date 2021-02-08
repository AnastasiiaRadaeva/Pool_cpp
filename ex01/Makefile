# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 10:33:41 by kbatwoma          #+#    #+#              #
#    Updated: 2021/02/08 14:23:21 by kbatwoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# не пересобирает, если поменять что-то в хедере

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

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -I$(HEADER_DIR) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re norm