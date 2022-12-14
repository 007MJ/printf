/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/14 17:32:01 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_vardique(va_list instr, int c, int *len)
{
	if (c == 'd' || c == 'i')
		ft_put_i(va_arg(instr, int ), len);
	if (c == 'c')
		ft_putchar(va_arg(instr, int), len);
	if (c == 's')
		ft_putstr(va_arg(instr, char *), len);
	if (c == 'u')
		ft_put_d(va_arg(instr, unsigned int), len);
	if (c == 'x')
		ft_put_lower_h(va_arg(instr, unsigned int), len);
	if (c == 'X')
		ft_put_upper_h(va_arg(instr, unsigned int), len);
	if (c == 'p')
		ft_put_ptr(va_arg(instr, long), len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		*len;
	va_list	instr;

	i = 0;
	len = &i;
	va_start(instr, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '%')
		{
			ft_vardique(instr, *(str + 1), len);
			str++;
		}
		else
			ft_putchar(*str, len);
		str++;
	}
	va_end(instr);
	return (*len);
}
