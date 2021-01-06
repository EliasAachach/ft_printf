/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:53:51 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/07 00:20:07 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	start_check(t_var *var, va_list arg)
{
	char	one_char[2];
	int		c_char;

	c_char = 0;
	one_char[1] = '\0';
	if (var->conv == 'c')
	{
		c_char = va_arg(arg, int);
		one_char[0] = c_char;
		var->total_len += ft_display(one_char, *var);
	}
	else if (var->conv == 's')
	{
		var->total_len += ft_display(va_arg(arg, char *), *var);
	}
	else if (var->conv == '%')
	{
		one_char[0] = '%';
		var->total_len += ft_display(one_char, *var);
	}
}

int	pdi_check(t_var *var, va_list arg)
{
	char	*tmp_str;

	if (var->conv == 'p')
	{
		tmp_str = ft_putmem(va_arg(arg, void *), var->isprec);
		if (tmp_str == NULL)
		{
			var->total_len = -1;
			return (1);
		}
		var->total_len += ft_display(tmp_str, *var);
		free(tmp_str);
	}
	else if (var->conv == 'd' || var->conv == 'i')
	{
		tmp_str = ft_itoa(va_arg(arg, int));
		if (tmp_str == NULL)
		{
			var->total_len = -1;
			return (1);
		}
		var->total_len += ft_display_diux(tmp_str, *var);
		free(tmp_str);
	}
	return (0);
}

int	end_convert(t_var *var, va_list arg)
{
	char	*tmp_str;

	if (var->conv == 'x')
	{
		tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 0);
		if (tmp_str == NULL)
		{
			var->total_len = -1;
			return (1);
		}
		var->total_len += ft_display_diux(tmp_str, *var);
		free(tmp_str);
	}
	else if (var->conv == 'X')
	{
		tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 1);
		if (tmp_str == NULL)
		{
			var->total_len = -1;
			return (1);
		}
		var->total_len += ft_display_diux(tmp_str, *var);
		free(tmp_str);
	}
	return (0);
}

t_var	check_convert(const	char *str, t_var var, va_list arg)
{
	int		i;
	int		tmp;
	char	*tmp_str;

	tmp = 0;
	i = 0;
	if (var.conv == 0)
		return (var);
	start_check(&var, arg);
	if (pdi_check(&var, arg) == 1)
		return (var);
	else if (var.conv == 'u')
	{
		tmp_str = ft_itoa_ui(va_arg(arg, int));
		if (tmp_str == NULL)
		{
			var.total_len = -1;
			return (var);
		}
		var.total_len += ft_display_diux(tmp_str, var);
		free(tmp_str);
	}
	if (end_convert(&var, arg) == 1)
		return (var);
	return (var);
}
