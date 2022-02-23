/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:49:37 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 19:50:21 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned long n)
{
	int	length;

	length = 0;
	while (n > 0)
	{
		n /= 16;
		length++;
	}
	return (length);
}
