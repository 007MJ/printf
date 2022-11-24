/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/24 15:33:18 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_check_in_str(va_list str, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(str, char)));
	else if (c == 's')
		return (ft_pustr(va_arg(str, char *)));
	else if (c == 'p')
		return (ft_putptr(str, ));
}

int	ft_printf(const char *str, ...)
{
	va_list	instr;
	char	c;
	int		i;

	i = 0;
	va_start(instr, str);
	while (str[i])
	{
		if (str[i] == "%")
		{
			c = str[i + 1];
			i += ft_check_in_str(instr, str[i + 1]);
		}
		i++;
	}
	va_end(instr);
	return (i);
}
