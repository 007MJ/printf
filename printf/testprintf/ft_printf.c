/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:44:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/07 13:23:00 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int	ft_putchar(int c)
{
		//write(1, "4", 1);
	write(1, &c, 1);
	return (1);
}

int	ft_vardique(va_list instr, int c)
{
	int	i;

	i = 0;
	//write(1, "2", 1);
	if (c == 'c')
		//write(1, "3", 1);
		i += ft_putchar(va_arg(instr, int));
	return (i);
}

int	ft_print(const char *str, ...)
{
	int		i;
	int		len;
	va_list	instr;

	i = 0;
	len = 0;
	va_start(instr, str);
	while (str[i])
	{
		//printf (" %c : %d\n", str[i], i);
		if (str[i] == '%')
		{
			//write(1, "1", 1);
			len += ft_vardique(instr, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}

	va_end(instr);
	return (len);
}

int	main(void)
{
	int i = ft_print("abc");
	printf("%d\n", i);
	int ii = printf("abc");
	printf("%d", ii);
}
