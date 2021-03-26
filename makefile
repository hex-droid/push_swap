CC = gcc

RM = rm -rf

CNAME = checker

PNAME = push_swap

SRC = 	checker/operations.c\
		checker/stack.c\
		checker/generic_op.c\
		utils/error.c\
		utils/utils.c\
		get_next_line/get_next_line.c\

SDIR = ./srcs/

IDIR = ./includes/

FLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix $(SDIR), $(SRC))

all : $(CNAME) $(PNAME)

$(CNAME):
	$(CC) $(SRCS) srcs/checker/main.c $(FLAGS) -I $(IDIR) -o $(CNAME)

$(PNAME):
	$(CC) $(SRCS) srcs/push_swap/main.c $(FLAGS) -I $(IDIR) -o $(PNAME)

clean:
	$(RM) checker
	$(RM) push_swap

re: clean all