.SILENT:
SRCS=\
srcs/ft_printf.c\
srcs/ft_conversion_symbol.c\
srcs/ft_print_char.c\
srcs/ft_print_conversion.c\
srcs/ft_print_integer.c\
srcs/ft_print_percent.c\
srcs/ft_print_str.c\

CC=gcc
CFLAGS=-w
OBJS=$(SRCS:.c=.o)
CPPFLAGS= -I includes/
AR= ar rcs
RM=rm -rf
NAME=libftprintf.a

run: re
	./test_output/testeur.sh
	make fclean

only: re
	gcc -w ./test_output/main_build.c -I ./includes -L . -lftprintf
	./a.out | bat

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv ./libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $@ $^

clean:
	make clean -C ./libft
	$(RM) $(OBJS) a.out

fclean: clean
	$(RM) $(NAME)

re: fclean all
