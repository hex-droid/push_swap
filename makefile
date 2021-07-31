CC = clang

NAME = push_swap

CHECKER = checker

FLAGS = -Werror -Wextra -Wall -fsanitize=address

SRCS =	srcs/main.c\
	srcs/list.c\
	srcs/error.c\
	srcs/tools.c\
	srcs/tools2.c\
	srcs/tools3.c\
	srcs/operations.c\
	srcs/debugg.c\
	\
	memory_tracking/memory_tracking.c\
	\

CSRCS = srcs_bonus/main.c\
	srcs_bonus/tools.c\
	srcs_bonus/get_next_line.c\
	srcs/list.c\
	srcs/error.c\
	srcs/tools.c\
	srcs/tools2.c\
	srcs/tools3.c\
	srcs/operations.c\
	srcs/debugg.c\
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