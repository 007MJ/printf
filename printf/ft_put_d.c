/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:28:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/15 19:49:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_d(int n, int *len)
{
	if (n == INT_MIN)
	{
		*len += write(1, "INT_MIN", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n > 9)
		ft_put_i(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}
