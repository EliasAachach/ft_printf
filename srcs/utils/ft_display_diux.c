/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_diux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:48:46 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/07 03:04:01 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	first_display(t_var *var, char *str, int *i, int *y)
{
	if (var->right == FALSE)
	{
		if (var->is_prec_neg == FALSE
			|| (var->width > var->prec && var->iszero == FALSE))
			var->zero_space = ' ';
		else
			var->zero_space = '0';
		while (*y < var->width - var->len)
		{
			if (var->is_nbr_neg == TRUE && var->iszero == TRUE
				&& var->is_prec_neg == TRUE)
				*i += ft_putchar('-');
			*y += ft_putchar(var->zero_space);
		}
	}
	if (var->diux == TRUE && var->len == 1 && str[0] == '0'
		&& var->isprec == TRUE)
		str[0] = '\0';
	while (str[*i])
		*i += ft_putchar(str[*i]);
}

void	sec_display(t_var *var, char *str, int *i, int *y)
{
	if (var->is_nbr_neg == TRUE && var->zero_space == '0' && var->prec == 0)
	{
		var->total_len += ft_putchar(str[*i]);
		*i = *i + 1;
	}
	if (var->right == FALSE)
	{
		if (var->width > var->len)
		{
			if (var->prec > 0)
			{
				var->zero_space = ' ';
				if (var->is_prec_neg == TRUE && var->iszero == TRUE)
					var->zero_space = '0';
				if (var->is_nbr_neg == TRUE)
					var->width--;
				while (*y < var->width - var->prec)
					*y += ft_putchar(var->zero_space);
			}
			else
				while (*y < var->width - var->len)
					*y += ft_putchar(var->zero_space);
		}
	}
}

int	third_display(t_var *var, char *str, int *i, int *y)
{
	int	j;

	j = 0;
	if (!(var->len > var->prec && var->prec > 0))
	{
		sec_display(var, str, i, y);
		if (var->is_nbr_neg == TRUE)
		{
			var->total_len += ft_putchar(str[*i]);
			*i = *i + 1;
			var->len--;
		}
		while (j < var->prec - var->len)
			j += ft_putchar('0');
		if (var->diux == TRUE && var-> len == 1 && str[0] == '0'
			&& var->isprec == TRUE)
			str[0] = '\0';
		while (str[*i])
			*i += ft_putchar(str[*i]);
	}
	return (j);
}

int	ft_display_diux(char *str, t_var var)
{
	int	i;
	int	y;
	int	j;
	int	ret;

	var.is_prec_neg = FALSE;
	var.is_nbr_neg = FALSE;
	var.len = ft_strlen(str);
	ret = 0;
	i = 0;
	y = 0;
	j = 0;
	if (setup_funct(str, &var) == 1)
		return (0);
	ret = setup2_funct(&var, str);
	if (ret >= 0)
		return (ret);
	if (var.len > var.prec && var.prec > 0)
		first_display(&var, str, &i, &y);
	j = third_display(&var, str, &i, &y);
	end_display(&var, &i, &y, &j);
	return (i + y + j);
}
