/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:51:09 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 19:53:09 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(char a)
{
	return (a == 'c' || a == 'd' || a == 'i' || a == 'p' || a == 'f'
		|| a == 's' || a == 'x' || a == 'X' || a == 'u' || a == '%');
}