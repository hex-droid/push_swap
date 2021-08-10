CC = clang

NAME = push_swap

CHECKER = checker

FLAGS = -Werror -Wextra -Wall -fsanitize=address

SRCS =	push_swap_src/main.c\
	push_swap_src/error.c\
	push_swap_src/debugg.c\
	\
	memory_tracking/memory_tracking.c\
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
	memory_tracking/memory_tracking.c\
	\

all:	
	@echo "Compiling...."
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@$(CC) $(FLAGS) $(CSRCS) -o $(CHECKER)
	@echo "Compiled!"
	
	
clean:
	@rm -rf */*.h.gch

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(CHECKER)

re : fclean all

.PHONY: all clean fclean re