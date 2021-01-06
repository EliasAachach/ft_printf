/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:45:51 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/06 17:03:38 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_star(t_var *var, const char *str, int *i)
{
	if (!(str[*i + 1] == '*'))
	{
		var->prec = ft_atoi(str + (*i + 1));
		if (var->prec == 0 && var->diux == FALSE)
		{
			var->prec = -1;
			var->errorprec = TRUE;
		}
		var->index = *i;
		return (1);
	}
	return (0);
}

int	is_dot(t_var *var, const char *str, va_list arg, int *i)
{
	int	y;

	y = 0;
	if (str[*i + 1] == '*')
		var->prec = va_arg(arg, int);
	while (var->identifier[y++])
	{
		if (str[*i + 1] == var->identifier[y])
		{
			if (var->identifier[y] == 'd' || var->identifier[y] == 'i'
				|| var->identifier[y] == 'u' || var->identifier[y] == 'x'
				|| var->identifier[y] == 'X')
				var->diux = TRUE;
			else
			{
				var->prec = -1;
				var->errorprec = TRUE;
				var->index = *i;
				return (1);
			}
		}
	}
	if (is_star(var, str, i) == 1)
		return (1);
	return (0);
}

t_var	check_precision(const char *str, t_var var, va_list arg)
{
	int	i;
	int	y;

	y = 0;
	i = var.index;
	var.prec = 0;
	var.errorprec = FALSE;
	var.isprec = FALSE;
	while (str[i])
	{
		y = 0;
		while (var.identifier[y++])
		{
			if (str[i] == var.identifier[y])
				return (var);
		}
		if (str[i] == '.')
		{
			var.isprec = TRUE;
			if (is_dot(&var, str, arg, &i) == 1)
				return (var);
		}
		i++;
	}
	return (var);
}
