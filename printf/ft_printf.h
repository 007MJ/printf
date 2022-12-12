/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/12 09:52:47 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c, int *len);
int	ft_putstr(char *str, int *len);
int	ft_put_lower_h(unsigned int number, int *len);
int	ft_put_upper_h(unsigned int number, int len);
int	ft_put_d(int number, int *len);
int	ft_put_i(int number, int *len);
int	ft_put_ptr(long long int pointer, int *len);
int	ft_put_u(unsigned int number, int *len);

#endif
