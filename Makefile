SRCS=\
srcs/ft_printf.c\
srcs/ft_conversion_symbol.c\
srcs/ft_print_char.c\
srcs/ft_print_conversion.c\
srcs/ft_print_integer.c\
srcs/ft_print_percent.c\
srcs/ft_print_str.c\
srcs/ft_print_pointer.c\
srcs/ft_print_unsigned.c\
srcs/ft_print_hexa.c\

CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)
CPPFLAGS= -I includes/
AR= ar rcs
RM=rm -rf
NAME=libftprintf.a

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
