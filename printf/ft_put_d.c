/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:28:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/14 16:39:24 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_d(int n, int *len)
{
	unsigned int	nn;

	nn = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar('-', len);
	}
	if (nn > 9)
		ft_put_i(nn / 10, len);
	ft_putchar(nn % 10 + '0', len);
}
