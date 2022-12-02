/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/02 14:48:25 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_check_in_str(va_list str, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(str, char)));
	else if (c == 's')
		return (ft_pustr(va_arg(str, char *)));
	else if (c == 'X')
		return (ft_puthex(va_arg(str, unsigned int)));
	else if (c == 'x')
		return (ft_puthexx(va_arg(str, unsigned int)));
	else if (c == 'd' || c == 'i')
		return (ft_putdecimal(va_arg(str, int)));
	else if (c == 'u')
		return (ft_put_u(va_arg(str, unsigned int)));

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
		ft_putchar(i);
		i++;
	}
	va_end(instr);
	return (i);
}
