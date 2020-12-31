/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:53:51 by elaachac          #+#    #+#             */
/*   Updated: 2020/12/30 16:59:31 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	check_convert(const	char *str, t_var var, va_list arg)
{
	int		i;
	int		c_char;
	int		tmp;
	char	one_char[2];
	char	*tmp_str;

	c_char = 0;
	tmp = 0;
	one_char[1] = '\0';
	i = 0;
	if (var.conv == 0)
		return (var);
	if (var.conv == 'c')
	{
		c_char = va_arg(arg, int);
		one_char[0] = c_char;
		var.total_len += ft_display(one_char, var);
	}
	else if (var.conv == 's')
	{
		var.total_len += ft_display(va_arg(arg, char *), var);
	}
	else if (var.conv == 'p')
	{
		tmp_str = ft_putmem(va_arg(arg, void *), var.isprec);
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display(tmp_str, var);
	}
	else if (var.conv == 'd' || var.conv == 'i')
	{
		tmp_str = ft_itoa(va_arg(arg, int));
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'u')
	{
		tmp_str = ft_itoa_ui(va_arg(arg, int));
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'x')
	{
		tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 0);
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'X')
	{
		tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 1);
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == '%')
	{
		one_char[0] = '%';
		var.total_len += ft_display(one_char, var);
	}
	return (var);
}
