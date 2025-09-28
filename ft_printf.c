/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:46:33 by kadas             #+#    #+#             */
/*   Updated: 2025/08/22 18:27:21 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	counter(const char *c, va_list list)
{
	int		count;
	size_t	i;
	int		j;

	count = 0;
	i = 0;
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1])
		{
			j = shatha(list, c[i + 1]);
			if (j == -1)
			{
				count = -1;
				break ;
			}
			count += j;
			i += 2;
		}
		else
			count += ft_putchar(c[i++]);
	}
	return (count);
}

int	ft_printf(const char *c, ...)
{
	va_list	list;
	int		count;

	if (!c)
		return (-1);
	va_start(list, c);
	count = counter(c, list);
	va_end(list);
	return (count);
}
