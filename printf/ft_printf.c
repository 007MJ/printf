/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/08 09:42:33 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_in_str(va_list str, int c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(str, int));
	else if (c == 's')
		i = ft_putstr(va_arg(str, char *));
	else if (c == 'X')
		i = ft_put_upper_h(va_arg(str, unsigned int));
	else if (c == 'x')
		i = ft_put_lower_h(va_arg(str, unsigned int));
	else if (c == 'd' || c == 'i')
		i = ft_put_d(va_arg(str, int));
	else if (c == 'u')
		i = ft_put_u(va_arg(str, unsigned int));
	else if (c == 'i')
		i = ft_put_i(va_arg(str, unsigned int));
	else if (c == 'p')
		i = ft_put_ptr(va_arg(str, long long int));
	else
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	instr;
	int		i;
	int		len;

	i = 0;
	va_start(instr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_check_in_str(instr, str[i + 1]);
		}
		len += ft_putchar(i);
		i++;
	}
	va_end(instr);
	return (len);
}
