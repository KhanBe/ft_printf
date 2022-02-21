/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:27:59 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/21 19:33:30 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_decimal_to_hex(char number, char flag)
{
	int	capitalize;

	capitalize = 0;
	if (flag == 'X')
		capitalize = 32;
	if (9 < number)
	{
		if (number == 10)
			return ('a' - capitalize);
		else if (number == 11)
			return ('b' - capitalize);
		else if (number == 12)
			return ('c' - capitalize);
		else if (number == 13)
			return ('d' - capitalize);
		else if (number == 14)
			return ('e' - capitalize);
		else if (number == 15)
			return ('f' - capitalize);
	}
	else
		return ('0' + number);
	return (0);
}
