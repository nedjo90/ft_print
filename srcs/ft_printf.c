/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:10:52 by nhan              #+#    #+#             */
/*   Updated: 2024/02/04 18:16:16 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	ft_print_char(int args)
{

	ft_putchar_fd(args, 1);
	return (1);
}

static int	ft_print_str(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		len++;
		str++;
	}
	return (len);
}

static int	ft_print_integer(int number)
{
	char* str_number;
	int	index;

	index = 0;
	str_number = ft_itoa(number);
	while(str_number[index] != '\0')
		ft_putchar_fd(str_number[index++], 1);
	free(str_number);
	return (index);
}


static int	ft_print_args(const char *conv, va_list args)
{
	int	size;

	size = 0;
	if (!*conv || !conv)
		return (0);
	if (*conv == '%')
		ft_putchar_fd(*conv, 1);
	else if (*conv == 'c')
		size = ft_print_char(va_arg(args, int));
	else if (*conv == 's')
		size = ft_print_str(va_arg(args, char *));		
	else if (*conv == 'i' || *conv == 'd')
		size = ft_print_integer(va_arg(args, int));
	return (size);
}

static int	ft_print_and_replace(const char *fmt, va_list args)
{
	int	len;
	int	size;

	len = 0;
	while(*fmt)
	{
		size = 1;
		if (*fmt == '%')
			size = ft_print_args(++fmt, args); 
		else
			ft_putchar_fd(*fmt, 1);
		if (size < 0)
			len = size;
		if (len >= 0)
			len += size;
		fmt++;
	}
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	int		len;
	va_list		args;

	len = 0;
	va_start(args, fmt);
	len = ft_print_and_replace(fmt, args);	
	va_end(args);
	return (len);
}
