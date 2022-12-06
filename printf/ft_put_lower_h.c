/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lower_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:24:07 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/06 11:24:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_lower_h(unsigned int number)
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
		temp = number / 16;
		ft_putchar(myascii[i + temp]);
		number = number / 16;
		ii++;
	}
	return (ii);
}
