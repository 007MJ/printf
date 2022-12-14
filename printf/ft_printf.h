/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/12/14 17:08:24 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_put_lower_h(unsigned int number, int *len);
void	ft_put_upper_h(unsigned int number, int *len);
void	ft_put_d(int number, int *len);
void	ft_put_i(int number, int *len);
void	ft_put_ptr(long pointer, int *len);
void	ft_put_u(unsigned int number, int *len);

#endif
