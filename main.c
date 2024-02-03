/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:13:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/03 15:59:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		char str[] = "please enter at least one string between \"... \"";
		ft_putstr_fd(str, 1);
		return (-1);
	}
	int i = 1;
	while (i < argc)
	{
		ft_printf(argv[i++]);
	}
}
