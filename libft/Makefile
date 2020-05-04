NAME= libft.a
CC= gcc
CFLAGS= -Wall -Wextra -Werror
OBJS= $(SRCS:.c=.o)
SRCS:= $(filter-out ft_lst%.c, $(wildcard *.c))


all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $^

%.o: %.c
	@$(CC) -c $< -o $@ $(CFLAGS)

bonus:
	@$(CC) $(CFLAGS) -c ft_lst*.c
	@ar rcs $(NAME) ft_lst*.o

so: fclean
	@$(CC) $(CFLAGS) -fpic -c *.c
	@$(CC) -shared -o libft.so *.o
 
clean: 
	@rm -f *.o
	
fclean: clean
	@rm -f $(NAME)
	@rm -f libft.so

re: fclean all

.PHONY: clean fclean bonus
