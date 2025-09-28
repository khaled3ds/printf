/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:10:24 by kadas             #+#    #+#             */
/*   Updated: 2025/08/20 16:23:02 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_itoi(int n);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long n);
int		shatha(va_list v, char c);
int		ft_printf(const char *c, ...);
int		tohex(unsigned int n, int a);
int		ft_itol(unsigned int n);
#endif
