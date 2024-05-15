CC	= gcc
FLAGS	= -Wall -Werror -Wextra -I -g
NAME	= push_swap
SRCS	= error/error.c error/error_utils.c \
			instructions/push.c instructions/rev_rotate.c instructions/rotate.c instructions/swap.c \
			sort_utils/sort_utils.c sort_utils/sort_utils_2.c sort_utils/sort_utils_3.c \
			utils/buble_sort.c utils/condition.c utils/stack_utils.c \
			main.c push_swap.c sort.c

all: $(NAME)
$(NAME):
	@cd libft && make
	$(CC) $(FLAGS) $(SRCS) libft/libft.a -o $(NAME)

clean:
	@cd libft && make clean

fclean:
	@cd libft && make fclean
	rm -f $(NAME)
	clear
	
re: fclean all