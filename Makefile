# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 16:18:36 by jbyeon            #+#    #+#              #
#    Updated: 2022/01/11 16:01:12 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
HEADER		= so_long.h
RM			= rm -f
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRC			= main.c error.c parse.c util.c init.c time.c philo_action.c
DIR_SRC		= ./srcs/
SRCS 		= $(addprefix $(DIR_SRC), $(SRC))
OBJS		= $(SRCS:.c=.o)


all : $(NAME)

.c.o : $(SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)  -lpthread


fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all

.PHONY: clean fclean all re

