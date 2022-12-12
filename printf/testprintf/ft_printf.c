/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:44:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/12 10:13:03 by mnshimiy         ###   ########.fr       */
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

void	ft_put_i(int n, int *count)
{
	unsigned int	nn;

	nn = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar('-', count);
		nn = -nn;
	}
	if (nn > 9)
		ft_put_i((nn / 10), count);
	ft_putchar(nn % 10 + '0', count);
}

void	ft_putstr(char *str, int *len)
{
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}

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

void	ft_vardique(va_list instr, int c, int *len)
{
	if (c == 'd')
		ft_put_i(va_arg(instr, int ), len);
	if (c == 'c')
		ft_putchar(va_arg(instr, int), len);
	if (c == 's')
		ft_putstr(va_arg(instr, char *), len);
}

int	ft_print(const char *str, ...)
{
	int		i;
	int		*len;
	va_list	instr;

	i = 0;
	len = &i;
	va_start(instr, str);
	while (*str)
	{
		if (*str == '%')
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

int	main(void)
{
	//char *ptr;
	//ptr = 0;

//	int i = ft_print("avoir de nombre en hex de %x\n", 1233);
//	printf("%d\n", i);
//	int ii = printf("avoir de nombre en hex de %x\n", 1233);
//	printf("%d\n", ii);
	int i ;
	i = 0;
	//ft_print("%d\n", -21);
	//printf("%d\n", i);
//	int ii;
//	ii = printf("%d\n", -21);
	//printf("%d\n", ii);
	i = ft_print("bonjour %s", "bonjour");
	printf("%d", i);
}
