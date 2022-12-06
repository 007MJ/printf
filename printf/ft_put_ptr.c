/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:14:23 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/06 11:24:04 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_ptr(long long int pointer)
{
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	i = ft_putstr("0x");
	while (pointer != 0)
	{
		temp = pointer / 16;
		if (temp >= 10)
			ft_putchar(temp);
		ft_putchar(temp);
		i++;
	}
	return (i);
}
