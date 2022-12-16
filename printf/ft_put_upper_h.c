/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:30:03 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/15 19:58:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_upper_h(unsigned int number, int *len)
{
	if (number >= 16)
	{
		ft_put_upper_h((number / 16), len);
		ft_put_upper_h((number % 16), len);
	}
	else if (number <= 9)
	{
		ft_putchar((number + 48), len);
	}
	else
	{
		ft_putchar((number + 55), len);
	}
}
