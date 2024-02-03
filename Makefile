SRCS=ft_printf.c

CC=gcc
CFLAGS=-w
OBJS=$(SRCS:.c=.o)
AR= ar rcs
RM=rm -rf
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv ./libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $@ $^

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

