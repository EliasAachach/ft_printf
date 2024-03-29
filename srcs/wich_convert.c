/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wich_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:46:31 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:06 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isalpha(int c, t_var *var)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		var->total_len += ft_putchar(c);
		return (1);
	}
	else
		return (0);
}

int		special_case(t_var *var, const char *str, int i)
{
	if (str[i] == '\t')
	{
		var->index = i;
		var->total_len += ft_putchar('\t');
		return (1);
	}
	if (str[i] == '\n')
	{
		var->index = i;
		var->total_len += ft_putchar('\n');
		return (1);
	}
	return (0);
}

t_var	wich_convert(const	char *str, t_var var)
{
	int	i;

	i = var.index;
	var.conv = 0;
	while (str[i])
	{
		if (special_case(&var, str, i) == 1)
			return (var);
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
			|| str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
			|| str[i] == 'x' || str[i] == 'X' || str[i] == '%')
		{
			var.conv = str[i];
			var.index = i;
			return (var);
		}
		if (ft_isalpha(str[i], &var) == 1)
			return (var);
		i++;
	}
	return (var);
}
