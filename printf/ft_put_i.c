/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/06 11:24:13 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	lenghtint(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

int	ft_put_i(unsigned int n)
{
	int	taille;

	taille = lenghtint(n);
	if (n == 0)
	{
		return (ft_putchar('0'));
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar ('-');
	}
	while (n != 0)
	{
		if (ft_putchar('0') == '-' && n < 0)
			ft_putchar ('0' - (n % 10));
		else
			ft_putchar ('0' + (n % 10));
		n = n / 10;
	}
	return (taille);
}
