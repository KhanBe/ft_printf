/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:52:12 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 23:34:18 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long address)
{
	int		bytes;
	char	*number;
	int		i;

	i = 0;
	if (!address)
		return (write(1, "(nil)", sizeof(char) * 5));
	bytes = write(1, "0x", sizeof(char) * 2);
	number = (char *)malloc(((ft_hex_length(address)) + 1) * sizeof(char));
	while (address)
	{
		number[i++] = ft_decimal_to_hex(address % 16, 'x');
		address /= 16;
	}
	number[i] = '\0';
	bytes += ft_reversed_string_print(number);
	ft_free(&number);
	return (bytes);
}
