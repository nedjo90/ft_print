/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:10:52 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 15:47:29 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			len;
	int			size;

	if (!fmt)
		return (-1);
	len = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		size = 0;
		while (*fmt && !ft_conversion_symbol(fmt))
			len += ft_print_char(*(fmt++));
		if (ft_conversion_symbol(fmt))
		{
			fmt++;
			size = ft_print_conversion(fmt++, &args);
		}
		if (size < 0)
			len = size;
		if (len >= 0)
			len += size;
	}
	va_end(args);
	return (len);
}
