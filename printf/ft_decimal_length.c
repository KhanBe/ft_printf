/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:55:35 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/21 19:58:46 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_length(long int number)
{
	int	length;

	length = 0;
	if (number <= 0)
		length++;
	while (number)
	{
		number /= 10;
		length++;
	}
	return (length);
}
