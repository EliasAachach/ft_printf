/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:34:56 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/06 16:15:09 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_nbr(t_var *var, const char *str, int *i)
{
	if (str[*i] >= '0' && str[*i] <= '9')
	{
		var->width = ft_atoi(str + *i);
		var->index = *i;
		return (1);
	}
	if (var->width > 0)
		return (1);
	return (0);
}

void	check_star(t_var *var, const char *str, int *i, va_list arg)
{
	if (str[*i] == '*')
	{
		var->width = va_arg(arg, int);
		if (var->width < 0)
		{
			var->width = -var->width;
			var->right = TRUE;
		}
	}
}

int	check_zero(t_var *var, const char *str, int *i)
{	
	if (str[*i] == '0')
	{
		var->zero_space = '0';
		var->iszero = TRUE;
		while (str[*i] == '0')
			*i = *i + 1;
		if (str[*i] == '.')
			return (1);
	}
	return (0);
}

t_var	check_width(const char *str, t_var var, va_list arg)
{
	int	i;
	int	y;

	y = 0;
	var.iszero = FALSE;
	i = var.index;
	var.zero_space = ' ';
	var.width = 0;
	while (str[i] && str[i] != '.')
	{
		y = 0;
		while (var.identifier[y])
		{
			if (str[i] == var.identifier[y])
				return (var);
			y++;
		}
		if (check_zero(&var, str, &i) == 1)
			return (var);
		check_star(&var, str, &i, arg);
		if (check_nbr(&var, str, &i) == 1)
			return (var);
		i++;
	}
	return (var);
}
