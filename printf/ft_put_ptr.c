/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:14:23 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/14 17:08:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(long number, int *len)
{
	ft_putstr("0x", len);
	if (number > 16)
	{
		ft_put_lower_h((number / 16), len);
		ft_put_lower_h((number % 16), len);
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
