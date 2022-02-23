/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:49:20 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 23:24:28 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ap, char c)
{
	int	bytes;

	bytes = 0;
	if (c == '%')
		bytes += ft_percent();
	if (c == 'c')
		bytes += ft_c(va_arg(ap, int));
	if (c == 's')
		bytes += ft_s(va_arg(ap, char *));
	if (c == 'p')
		bytes += ft_p(va_arg(ap, unsigned long));
	if (c == 'd' || c == 'i')
		bytes += ft_d_i(va_arg(ap, int));
	if (c == 'u')
		bytes += ft_u(va_arg(ap, int));
	if (c == 'x' || c == 'X')
		bytes += ft_x(va_arg(ap, unsigned int), c);
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		bytes;
	char	c;

	i = 0;
	bytes = 0;
	va_start(ap, str);
	while (str[i] != 0)
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			bytes += ft_check(ap, c);
			i++;
		}
		else
			bytes += write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(ap);
	return (bytes);
}
