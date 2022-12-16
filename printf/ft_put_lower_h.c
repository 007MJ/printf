/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lower_h.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:24:07 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/15 19:58:50 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_lower_h(unsigned int number, int *len)
{
	if (number >= 16)
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
		ft_putchar((number + 87), len);
	}
}
