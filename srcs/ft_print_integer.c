/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:34:30 by nhan              #+#    #+#             */
/*   Updated: 2024/02/05 15:34:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int number)
{
	int	len;

	len = 0;
	ft_putnbr_fd(number, 1);
	if (number == 0)
		return (1);
	if (number == -2147483648)
		number--;
	if (number < 0)
		number *= -1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}
