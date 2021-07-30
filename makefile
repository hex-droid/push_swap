CC = clang

NAME = push_swap

FLAGS = -Werror -Wextra -Wall -fsanitize=address

SRCS =	srcs/main.c\
	srcs/list.c\
	srcs/error.c\
	srcs/tools.c\
	\
	memory_tracking/memory_tracking.c\
	\

INC =	inc/push_swap.h\
	\
	memory_tracking/memory_tracking.h\
	\

all:	
	@echo "Compiling...."
	@$(CC) $(FLAGS) $(SRCS) -I $(INC)
	@echo "Compiled!"
clean:
	@rm -rf *.o

fclean: clean
	@rm -rf a.out
	@rm -rf */*.h.gch

re : fclean all

.PHONY: all clean fclean re