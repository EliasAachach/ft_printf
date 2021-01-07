/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_diux_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 02:57:10 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/07 03:06:44 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	setup_funct(char *str, t_var *var)
{
	if (str[0] == '-')
		var->is_nbr_neg = TRUE;
	if (var->prec < 0 && var->errorprec == FALSE)
	{
		var->is_prec_neg = TRUE;
		var->prec = 1;
	}
	if (var->len == 1 && str[0] == '0' && var->prec == 0 && var->isprec == TRUE)
	{
		if (var->width > 0)
			var->prec = -1;
		else
			return (1);
	}
	if (var->isprec == TRUE && (var->prec >= 0 || var->errorprec == TRUE))
		var->zero_space = ' ';
	return (0);
}

int	setup2_funct(t_var *var, char *str)
{
	if (var->prec == -1 && var->len == 1 && str[0] == '0')
	{
		if (var->width > 0)
		{
			var->zero_space = ' ';
			var->total_len += ft_display("", *var);
			return (var->width);
		}
		else
			return (0);
	}
	if (var->right == TRUE)
		var->zero_space = ' ';
	if (var->diux == TRUE && var->len == 1
		&& str[0] == '0' && var->isprec == TRUE
		&& var->width > 0 && var->right == FALSE)
		var->width++;
	return (-1);
}

void	end_display(t_var *var, int *i, int *y, int *j)
{
	if (var->right == TRUE)
	{
		while (*y < var->width - *i - *j)
			*y += ft_putchar(var->zero_space);
	}
}
