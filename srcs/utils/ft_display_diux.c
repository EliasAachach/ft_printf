/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_diux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:48:46 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/07 00:43:51 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	setup_funct(char *str, t_var *var, int *is_nbr_neg, int *is_prec_neg)
{
	if (str[0] == '-')
		*is_nbr_neg = TRUE;
	if (var->prec < 0 && var->errorprec == FALSE)
	{
		*is_prec_neg = TRUE;
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

int	ft_display_diux(char *str, t_var var)
{
	int	is_prec_neg;
	int	is_nbr_neg;
	int	i;
	int	y;
	int	j;

	is_prec_neg = FALSE;
	is_nbr_neg = FALSE;
	var.len = ft_strlen(str);
	i = 0;
	y = 0;
	j = 0;
	if (setup_funct(str, &var, &is_nbr_neg, &is_prec_neg) == 1)
		return (0);
	if (var.prec == -1 && var.len == 1 && str[0] == '0')
	{
		if (var.width > 0)
		{
			var.zero_space = ' ';
			var.total_len += ft_display("", var);
			return (var.width);
		}
		else
			return (0);
	}
	if (var.right == TRUE)
		var.zero_space = ' ';
	if (var.diux == TRUE && var.len == 1
		&& str[0] == '0' && var.isprec == TRUE
		&& var.width > 0 && var.right == FALSE)
		var.width++;
	if (var.len > var.prec && var.prec > 0)
	{
		if (var.right == FALSE)
		{
			if (is_prec_neg == FALSE
				|| (var.width > var.prec && var.iszero == FALSE))
				var.zero_space = ' ';
			else
				var.zero_space = '0';
			while (y < var.width - var.len)
			{
				if (is_nbr_neg == TRUE && var.iszero == TRUE
					&& is_prec_neg == TRUE)
					i += ft_putchar('-');
				y += ft_putchar(var.zero_space);
			}
		}
		if (var.diux == TRUE && var.len == 1 && str[0] == '0'
			&& var.isprec == TRUE)
			str[0] = '\0';
		while (str[i])
			i += ft_putchar(str[i]);
	}
	else
	{
		if (is_nbr_neg == TRUE && var.zero_space == '0' && var.prec == 0)
		{
			var.total_len += ft_putchar(str[i]);
			i++;
			if (var.width > 0 && var.prec > 0)
				var.len--;
		}
		if (var.right == FALSE)
		{
			if (var.width > var.len)
			{
				if (var.prec > 0)
				{
					var.zero_space = ' ';
					if (is_prec_neg == TRUE && var.iszero == TRUE)
						var.zero_space = '0';
					if (is_nbr_neg == TRUE)
						var.width--;
					while (y < var.width - var.prec)
						y += ft_putchar(var.zero_space);
				}
				else
					while (y < var.width - var.len)
						y += ft_putchar(var.zero_space);
			}
		}
		if (is_nbr_neg == TRUE)
		{
			var.total_len += ft_putchar(str[i]);
			i++;
			var.len--;
		}
		while (j < var.prec - var.len)
			j += ft_putchar('0');
		if (var.diux == TRUE && var. len == 1 && str[0] == '0'
			&& var.isprec == TRUE)
			str[0] = '\0';
		while (str[i])
			i += ft_putchar(str[i]);
	}
	if (var.right == TRUE)
	{
		while (y < var.width - i - j)
			y += ft_putchar(var.zero_space);
	}
	return (i + y + j);
}
