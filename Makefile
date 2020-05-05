# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 11:12:01 by user42            #+#    #+#              #
#    Updated: 2020/05/05 15:45:55 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./srcs/

OBJS = $(SRCS:.c=.o)

SRCS:= $(wildcard srcs/*.c)

INCLUDES = -I./include

all: $(NAME)

lib:
	@make -C libft/ all 

$(NAME): $(OBJS)
	ar rcs $(NAME) $^ libft/*.o

$(OBJS) : $(HEADERS)

%.o: %.c
	$(CC) $(FLAGS) -c $< $(INCLUDES) -o $@ 

clean:
			rm -f $(OBJS)
			@make -C libft/ clean

fclean: clean
			rm -f  $(NAME)
			@make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re bonus lib