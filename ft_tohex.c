/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:16:24 by kadas             #+#    #+#             */
/*   Updated: 2025/08/20 15:31:28 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	tohex(unsigned int n, int a)
{
	int		count;
	char	*base;

	if (a == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += tohex(n / 16, a);
	count += ft_putchar(base[n % 16]);
	return (count);
}
