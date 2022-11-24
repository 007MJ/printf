/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:51 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/23 15:20:23 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	instr;
	char	c;
	int		sizestr;

	sizestr = 0;
	va_start(instr, str);
	while (str[sizestr])
	{
		if (str[sizestr] == "%")
		{
			c = str[sizestr + 1];
			ft_check_in_str(va_arg(instr, char), str);
		}
		sizestr++;
	}
	va_end(instr);
	return (sizestr);
}
