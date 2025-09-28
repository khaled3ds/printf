/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shatha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:40:26 by kadas             #+#    #+#             */
/*   Updated: 2025/08/20 16:22:03 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	shatha(va_list v, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_itoi(va_arg(v, int)));
	else if (c == 'u')
		return (ft_itol(va_arg(v, unsigned int)));
	else if (c == 's')
		return (ft_putstr(va_arg(v, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(v, int)));
	else if (c == 'p')
		return (ft_putptr(va_arg(v, unsigned long)));
	else if (c == 'x')
		return (tohex((va_arg(v, unsigned int)), 0));
	else if (c == 'X')
		return (tohex((va_arg(v, unsigned int)), 1));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
