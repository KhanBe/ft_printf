/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:05:21 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/22 22:14:25 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_number(unsigned int number)
{
	if (number < 10)
		ft_putchar_fd(number + '0', 1);
	else
	{
		ft_put_number(number / 10);
		ft_put_number(number % 10);
	}
}

int	ft_u(unsigned int number)
{
	ft_put_number(number);
	return (ft_decimal_length(number));
}
