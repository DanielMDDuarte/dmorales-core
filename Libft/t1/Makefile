SRC_DIR = srcs
C_FILES = $(wildcard ft_*.c)
H_DIR = .
O_FILES = $(C_FILES:.c=.o)
CC_FLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libft.a

all: $(NAME)

$(NAME): $(O_FILES)
	ar -rcs $(NAME) $(O_FILES)

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@ -I $(H_DIR)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
tclean:
	rm -f test

test:
	gcc test.c -L. -lft -o test

retest: tclean test