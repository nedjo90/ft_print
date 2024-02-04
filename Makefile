.SILENT:
SRCS=\
srcs/ft_printf.c\

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
