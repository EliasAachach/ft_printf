/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wich_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:46:31 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/05 02:57:00 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	wich_convert(const	char *str, t_var var)
{
	int	i;

	i = var.index;
	while (str[i])
	{
		if (str[i] == '\t')
		{
			var.index = i;
			var.total_len += ft_putchar('\t');
			return (var);
		}
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
			|| str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
			|| str[i] == 'x' || str[i] == 'X' || str[i] == '%')
		{
			var.conv = str[i];
			var.index = i;
			return (var);
		}
		i++;
	}
	return (var);
}
