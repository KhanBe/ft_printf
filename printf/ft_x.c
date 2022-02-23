/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:45:36 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 23:36:27 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int n, char flag)
{
	char	*num;
	int		bytes;
	int		i;

	i = 0;
	if (!n)
		return (write(1, "0", sizeof(char) * 1));
	num = (char *)malloc((ft_hex_length(n) + 1) * sizeof(char));
	while (n)
	{
		num[i++] = ft_decimal_to_hex(n % 16, flag);
		n /= 16;
	}
	num[i] = '\0';
	bytes = ft_reversed_string_print(num);
	ft_free(&num);
	return (bytes);
}
