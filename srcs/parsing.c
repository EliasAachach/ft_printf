/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:25:19 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/06 17:40:12 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	parsing(const char *str, t_var var, va_list arg)
{
	var = check_flags(str, var);
	var = check_width(str, var, arg);
	var = check_precision(str, var, arg);
	var = wich_convert(str, var);
	if (var.conv == 's' && var.isprec == TRUE && var.prec == 0)
	{
		var.prec = -1;
		var.errorprec = TRUE;
	}
	if (var.errorprec == TRUE && var.conv == 's')
	{
		va_arg(arg, char *);
		if (var.width > 0)
		{
			var.total_len += ft_display("", var);
		}
		return (var);
	}
	var = check_convert(str, var, arg);
	return (var);
}
