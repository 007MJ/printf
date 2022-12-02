/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:28:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/30 17:35:55 by mnshimiy         ###   ########.fr       */
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

int	ft_putdecimal(int n)
{
	int	taille;

	taille = lenghtint(n);
	if (n == 0)
	{
		return (ft_putchar('0'));
	}
	if (n < 0)
	{
		n = *-1;
		ft_putchar ('-');
	}
	while (n != 0)
	{
		if (str[0] == '-' && n < 0)
			ft_putchar ('0' - (n % 10));
		else
			ft_putchar ('0' + (n % 10));
		n = n / 10;
	}
	return (taille);
}
