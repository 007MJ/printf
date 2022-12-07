/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:30:03 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/06 11:55:12 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_upper_h(unsigned int number)
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
		number = number / 16;
		ii++;
	}
	return (ii);
}
