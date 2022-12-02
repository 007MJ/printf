/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:30:03 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/29 14:12:23 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
#include "printf.h"


int	ft_puthex(unsigned int number)
{
	int	temp;
	int	ii;

	ii = 0;
	while (number != 10)
	{
		temp = number / 16;
		if (temp >= 10)
			ft_putchar(temp + 55);
		ft_putchar(temp + 48);
		number = number/16;
		ii++;
	}
	return (ii);
}
*/
int main ()
{
	int i;
	char *string ="0123456789abcdef";
	i = 0;
	write(1, &string[i + 15], 1);
}
