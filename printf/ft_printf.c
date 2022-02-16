/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:49:20 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/16 22:57:39 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ap, char c)
{
	int	bytes;

	bytes = 0;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	bytes = 0;
	va_start(ap, str);
	while (str[i] != 0)
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			bytes += ft_check(ap, c);
		}
		i++;
	}
	va_end(ap);
	return (bytes);
}
