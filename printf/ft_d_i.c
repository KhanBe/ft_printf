/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:30:47 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 19:45:19 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnumber(int n)
{
	int	sum;

	sum = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		if (n == -2147483648)
		{
			n--;
			sum = 1;
		}
	}
	if (n < 10)
		ft_putchar_fd(n + '0' + sum, 1);
	else
	{
		ft_putnumber(n / 10);
		ft_putnumber(n % 10 + sum);
	}
}

int	ft_d_i(int n)
{
	ft_putnumber(n);
	return (ft_decimal_length(n));
}
