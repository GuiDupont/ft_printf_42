# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 11:12:01 by user42            #+#    #+#              #
#    Updated: 2020/05/05 16:01:00 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./srcs/

OBJS = $(SRCS:.c=.o)

SRCS		= \
						srcs/ft_printf.c \
						srcs/valid_config.c \
						srcs/printing_global.c \
						srcs/print_no_conf.c \
						srcs/printing_s_c_percentage.c \
						srcs/printing_d_i_u.c \
						srcs/printing_p_x.c \
						srcs/print_single_char.c \
						srcs/printing_tools.c \
						srcs/tools_config.c \
						srcs/tools_3.c \
						srcs/tools_2.c \
						srcs/tools.c 


INCLUDES = -I./include

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft/ all
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