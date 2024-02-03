SRCS=ft_printf.c

CC=gcc
CFLAGS=-w
OBJS=$(SRCS:.c=.o)
AR= ar rcs
RM=rm -rf
NAME=libftprintf.a

run: re
	$(CC) -w main.c -I . -L . -lftprintf 

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv ./libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $@ $^

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
