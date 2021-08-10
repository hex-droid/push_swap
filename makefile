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

all:	
	@echo "Compiling...."
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
#	@$(CC) $(FLAGS) $(CSRCS) -o $(CHECKER)
	@echo "Compiled!"
	
	
clean:
	@rm -rf */*.h.gch

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(CHECKER)

re : fclean all

.PHONY: all clean fclean re