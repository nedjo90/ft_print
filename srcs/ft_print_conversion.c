/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:33:05 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 15:33:28 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_conversion(char *fmt, va_list *args)
{
	int	size;

	if (*fmt == '%')
		size = ft_print_percent(*fmt);
	else if (*fmt == 'c')
		size = ft_print_char(va_arg(*args, int));
	else if (*fmt == 's')
		size = ft_print_str(va_arg(*args, char *));
	else if (*fmt == 'i' || *fmt == 'd')
		size = ft_print_integer(va_arg(*args, int));
	return (size);
}
