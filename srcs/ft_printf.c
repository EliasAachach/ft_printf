/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:18:59 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/08 13:24:41 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	t_var	var;

	var = init(var);
	va_start(arg, str);
	while (str[var.index])
	{
		if (str[var.index] == '%')
		{
			var.index++;
			var = parsing(str, var, arg);
			if (var.total_len == -1)
				return (var.total_len);
			var.index++;
		}
		else
		{
			var.total_len += ft_putchar(str[var.index]);
			var.index++;
		}
	}
	va_end(arg);
	return (var.total_len);
}
