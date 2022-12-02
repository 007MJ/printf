/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:24:07 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/30 14:10:26 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexx(unsigned int number)
{
	char	*myascii;
	int		i;
	int		ii;
	int		temp;

	i = 0;
	ii = 0;
	myascii = "0123456789abcdef";
	while (number != 0)
	{
		tem = number / 16;
		ft_putchar(myascii[i + tem]);
		number = number / 16;
		ii++;
	}
	return (ii);
}
