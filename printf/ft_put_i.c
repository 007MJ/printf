/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:03:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/09 11:42:59 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_i(int n)
{
	int				*i;
	unsigned int	nn;

	nn = (unsigned int)n;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-', i);
	}
	if (n > 9)
		ft_put_i(nn / 10);
	ft_putchar(nn % 10 + '0', i);
	return (i);
}
