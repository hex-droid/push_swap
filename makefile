CC = clang

NAME = push_swap

CHECKER = checker

FLAGS = -g -Werror -Wextra -Wall -fsanitize=address

SRCS =	push_swap_src/main.c\
	push_swap_src/error.c\
	push_swap_src/debugg.c\
	push_swap_src/push_swap.c\
	push_swap_src/utils.c\
	push_swap_src/utils2.c\
	push_swap_src/bigsort.c\
	\
	intarray/intarray.c\
	\
	parser/parser.c\
	\
	tools/tools.c\
	\
	operations/tools.c\
	operations/operations.c
	\

CSRCS =	checker_src/checker.c\
	checker_src/tools.c\
	\
	intarray/intarray.c\
	\
	parser/parser.c\
	\
	operations/operations.c\
	operations/tools.c\
	\
	get_next_line/get_next_line.c\
	\
	push_swap_src/error.c\
	push_swap_src/debugg.c\
	\
	tools/tools.c\
	\

all:	
	@echo "Compiling push_swap"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Compiled!"

bonus:
	@echo "Compiling checker"
	@$(CC) $(FLAGS) $(CSRCS) -o $(CHECKER)
	@echo "Compiled!"
clean:
	@rm -rf */*.h.gch

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(CHECKER)

re : fclean all bonus

.PHONY: all clean fclean re