/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:14:23 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/16 11:58:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long long number, int *len)
{
	if (number >= 16)
	{
		ft_put_ptr((number / 16), len);
		ft_put_ptr((number % 16), len);
	}
	else if (number < 10)
	{
		ft_putchar((number + 48), len);
	}
	else
	{
		ft_putchar((number + 87), len);
	}
}

void	ft_ox(unsigned long long number, int *len)
{
	ft_putstr("0x", len);
	ft_put_ptr(number, len);
}
