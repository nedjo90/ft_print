/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:29:57 by nhan              #+#    #+#             */
/*   Updated: 2024/02/07 01:57:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "../libft/libft.h"

# ifdef _linux_

#  define NULL_PTR "(null)"
# else
#  define NULL_PTR "0x0"
# endif

int	ft_printf(const char *fmt, ...);
int	ft_conversion_symbol(char *haystack);
int	ft_print_char(int c);
int	ft_print_conversion(char *fmt, va_list *args);
int	ft_print_integer(int number);
int	ft_print_percent(char c);
int	ft_print_str(char *str);
int	ft_print_pointer(unsigned long memory_address);
int	ft_print_unsigned(unsigned int number);
int	ft_print_hexa(unsigned int number, char c);

#endif
