/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoo <jaewoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:42:35 by jaewoo            #+#    #+#             */
/*   Updated: 2022/02/23 23:35:00 by jaewoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_percent(void);
int		ft_c(char c);
int		ft_d_i(int c);
int		ft_p(unsigned long n);
int		ft_s(char *str);
int		ft_u(unsigned int n);
int		ft_x(unsigned int number, char flag);
int		ft_check_arg(char a);
int		ft_decimal_length(long int number);
int		ft_hex_length(unsigned long number);
char	ft_decimal_to_hex(char number, char flag);
int		ft_reversed_string_print(char *str);
void	ft_free(char **pointer);
#endif
