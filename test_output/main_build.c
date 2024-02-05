/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_standard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:13:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 16:02:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char** argv)
{

	int value;
	ft_printf("Category : %%\n");

	// value = ft_printf(" %% ");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %%%% ");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %% %% %% ");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %%  %%  %% ");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %%   %%   %% ");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%%");
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%% %%");
	// ft_printf("\n=====>%i\n", value);

	
	// ft_printf("Category : c\n");

	// value = ft_printf("%c\n", '0');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 'A');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 'a');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 'Z');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 'z');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '*');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '&');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '!');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 32);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", 126);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '1');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '9');
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '0' - 256);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%c\n", '0' + 256);
	// ft_printf("\n=====>%i\n", value);


	ft_printf("Category : s\n");

	char *str = "Je suis une chaine de caracteres tout a fait innocente !";

	value = ft_printf("%s\n", "");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf(" %s\n", "");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s \n", "");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf(" %s \n", "");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s\n", "\n");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s %s\n", "\n", " - ");
	ft_printf("\n=====>%i\n", value);
	value = ft_printf(" %s %s %s %s\n", "-\n", "0\n", "\n", str);
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s\n", str);
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s %s\n", str, str);
	ft_printf("\n=====>%i\n", value);
	value = ft_printf("%s\n", NULL);
	ft_printf("\n=====>%i\n", value);


	// ft_printf("Category : p\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf("%p\n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%p\n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%p\n", 42);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%p %p\n", LONG_MIN, LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%p %p\n", INT_MIN, INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf("%p %p\n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %p \n", 0);
	// ft_printf("\n=====>%i\n", value);


	// ft_printf("Category : d\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf(" %d \n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 17);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -14);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", -101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", INT_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", LONG_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", UINT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d \n", 9223372036854775807LL);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("\n=====>%i\n", value);


	// ft_printf("Category : i\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf(" %i \n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 17);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -14);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", -101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", INT_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", LONG_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", UINT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i \n", 9223372036854775807LL);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("\n=====>%i\n", value);

	// ft_printf("Category : u\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf(" %u \n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 17);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -14);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", -101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", INT_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", LONG_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", UINT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u \n", 9223372036854775807LL);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("\n=====>%i\n", value);


	// ft_printf("Category : x\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf(" %x \n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 17);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -14);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", -101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", INT_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", LONG_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", UINT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x \n", 9223372036854775807LL);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("\n=====>%i\n", value);


	// ft_printf("Category : X\n");
	// ft_printf("\n=====>%i\n", value);

	// value = ft_printf(" %X \n", 0);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 1);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 17);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -9);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -10);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -11);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -14);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -15);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -16);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -99);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -100);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", -101);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", INT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", INT_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", LONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", LONG_MIN);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", UINT_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", ULONG_MAX);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X \n", 9223372036854775807LL);
	// ft_printf("\n=====>%i\n", value);
	// value = ft_printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf("\n=====>%i\n", value);



}
