CC = gcc

RM = rm -rf

CNAME = checker

CSRC = 	main.c\
		operations.c\
		stack.c\

CSDIR = ./srcs/checker/

IDIR = ./includes/

FLAGS = -Wall -Wextra -Werror

CSRCS = $(addprefix $(CSDIR), $(CSRC))

all : $(CNAME)

$(CNAME):
	$(CC) $(CSRCS) $(FLAGS) -I $(IDIR) -o $(CNAME)

clean:
	$(RM) checker

re: clean all