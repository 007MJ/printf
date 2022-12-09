/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:44:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/09 11:37:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(int c, int *zise)
{
	write(1, &c, 1);
	*zise += 1;
}

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

int	ft_vardique(va_list instr, int c)
{
	int	i;

	i = 0;
	if (c == 'd')
		i += ft_put_i(va_arg(instr, int));
	return (i);
}

int	ft_print(const char *str, ...)
{
	int		i;
	int		*len;
	va_list	instr;

	i = 0;
	len = 0;
	va_start(instr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_vardique(instr, str[i + 1]);
			i++;
		}
		else
			ft_putchar(str[i], );
		i++;
	}
	va_end(instr);
	return (len);
}

int	main(void)
{
	char *ptr;
	ptr = 0;

//	int i = ft_print("avoir de nombre en hex de %x\n", 1233);
//	printf("%d\n", i);
//	int ii = printf("avoir de nombre en hex de %x\n", 1233);
//	printf("%d\n", ii);
	int i ;
	i = ft_print("%d\n", -21);
	printf("%d\n", i);
	int ii;
	ii = printf("%d\n", -21);
	printf("%d\n", ii);
}
