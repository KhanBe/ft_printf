/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:52:12 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/21 19:38:45 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long address)
{
	int		bytes;
	char	*number;
	int		i;

	bytes = 0;
	if (!address)
		return (write(1, "0x0", sizeof(char) * 3));
	bytes = write(1, "0x", sizeof(char) * 2);
	num = (char *)malloc(((ft_hex_length(address)) + 1) * sizeof(char));
	while (address)
	{
		num[i++] = ft_decimal_to_hex(address % 16, 'x');
		address /= 16;
	}
	num[i] = '\0';
}
