/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_standard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:13:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 16:03:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char** argv)
{

	int value;




	// printf("Category : %%\n");

	// value = printf(" %% ");
	// printf("\n=====>%i\n", value);
	// value = printf(" %%%% ");
	// printf("\n=====>%i\n", value);
	// value = printf(" %% %% %% ");
	// printf("\n=====>%i\n", value);
	// value = printf(" %%  %%  %% ");
	// printf("\n=====>%i\n", value);
	// value = printf(" %%   %%   %% ");
	// printf("\n=====>%i\n", value);
	// value = printf("%%");
	// printf("\n=====>%i\n", value);
	// value = printf("%% %%");
	// printf("\n=====>%i\n", value);

	







	// printf("Category : c\n");

	// value = printf("%c\n", '0');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 'A');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 'a');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 'Z');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 'z');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '*');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '&');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '!');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 32);
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", 126);
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '1');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '9');
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '0' - 256);
	// printf("\n=====>%i\n", value);
	// value = printf("%c\n", '0' + 256);
	// printf("\n=====>%i\n", value);









	printf("Category : s\n");

	char *str = "Je suis une chaine de caracteres tout a fait innocente !";

	value = printf("%s\n", "");
	printf("\n=====>%i\n", value);
	value = printf(" %s\n", "");
	printf("\n=====>%i\n", value);
	value = printf("%s \n", "");
	printf("\n=====>%i\n", value);
	value = printf(" %s \n", "");
	printf("\n=====>%i\n", value);
	value = printf("%s\n", "\n");
	printf("\n=====>%i\n", value);
	value = printf("%s %s\n", "\n", " - ");
	printf("\n=====>%i\n", value);
	value = printf(" %s %s %s %s\n", "-\n", "0\n", "\n", str);
	printf("\n=====>%i\n", value);
	value = printf("%s\n", str);
	printf("\n=====>%i\n", value);
	value = printf("%s %s\n", str, str);
	printf("\n=====>%i\n", value);
	value = printf("%s\n", NULL);
	printf("\n=====>%i\n", value);


	// printf("Category : p\n");
	// printf("\n=====>%i\n", value);

	// value = printf("%p\n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf("%p\n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf("%p\n", 42);
	// printf("\n=====>%i\n", value);
	// value = printf("%p %p\n", LONG_MIN, LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf("%p %p\n", INT_MIN, INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf("%p %p\n", ULONG_MAX, -ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %p \n", 0);
	// printf("\n=====>%i\n", value);


	// printf("Category : d\n");
	// printf("\n=====>%i\n", value);

	// value = printf(" %d \n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 17);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -14);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", -101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", INT_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", LONG_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", UINT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d \n", 9223372036854775807LL);
	// printf("\n=====>%i\n", value);
	// value = printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n=====>%i\n", value);


	// printf("Category : i\n");
	// printf("\n=====>%i\n", value);

	// value = printf(" %i \n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 17);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -14);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", -101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", INT_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", LONG_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", UINT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i \n", 9223372036854775807LL);
	// printf("\n=====>%i\n", value);
	// value = printf(" %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n=====>%i\n", value);

	// printf("Category : u\n");
	// printf("\n=====>%i\n", value);

	// value = printf(" %u \n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 17);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -14);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", -101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", INT_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", LONG_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", UINT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u \n", 9223372036854775807LL);
	// printf("\n=====>%i\n", value);
	// value = printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n=====>%i\n", value);


	// printf("Category : x\n");
	// printf("\n=====>%i\n", value);

	// value = printf(" %x \n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 17);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -14);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", -101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", INT_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", LONG_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", UINT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x \n", 9223372036854775807LL);
	// printf("\n=====>%i\n", value);
	// value = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n=====>%i\n", value);


	// printf("Category : X\n");
	// printf("\n=====>%i\n", value);

	// value = printf(" %X \n", 0);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 1);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 17);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -9);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -10);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -11);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -14);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -15);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -16);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -99);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -100);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", -101);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", INT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", INT_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", LONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", LONG_MIN);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", UINT_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", ULONG_MAX);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X \n", 9223372036854775807LL);
	// printf("\n=====>%i\n", value);
	// value = printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n=====>%i\n", value);



}
