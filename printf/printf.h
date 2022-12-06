/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/06 11:26:00 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_put_lower_h(unsigned int number);
int	ft_put_upper_h(unsigned int number);
int	ft_put_d(int number);
int	ft_put_i(unsigned int number);
int	ft_put_ptr(long long int pointer);
int	ft_put_u(unsigned int number);

#endif
