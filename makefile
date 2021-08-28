CC = clang

NAME = push_swap

CHECKER = checker

FLAGS = -Werror -Wextra -Wall -fsanitize=address

SRCS =	push_swap_src/main.c\
	push_swap_src/error.c\
	push_swap_src/push_swap.c\
	push_swap_src/utils.c\
	push_swap_src/utils2.c\
	push_swap_src/bigsort.c\
	\
	intarray/intarray.c\
	intarray/intarray2.c\
	intarray/intarray3.c\
	intarray/intarray4.c\
	intarray/intarray5.c\
	\
	parser/parser.c\
	\
	tools/tools.c\
	tools/tools2.c\
	tools/tools3.c\
	\
	operations/tools.c\
	operations/operations.c\
	operations/operations3.c\
	operations/operations2.c\
	\

CSRCS =	checker_src/checker.c\
	checker_src/tools.c\
	\
	intarray/intarray.c\
	intarray/intarray2.c\
	intarray/intarray3.c\
	intarray/intarray4.c\
	intarray/intarray5.c\
	\
	parser/parser.c\
	\
	operations/tools.c\
	operations/operations.c\
	operations/operations3.c\
	operations/operations2.c\
	\
	get_next_line/get_next_line.c\
	\
	push_swap_src/error.c\
	\
	tools/tools.c\
	tools/tools2.c\
	tools/tools3.c\
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

.PHONY: all bonus clean fclean re