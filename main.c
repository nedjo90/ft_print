/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:13:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/03 14:31:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("please enter a single string between \"... \"");
		return (-1);
	}
	printf("%s", argv[1]);
	return (0);
}
