/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:04:27 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/11 13:53:47 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	spec_case(t_var *var, int *y)
{
	while (var->prec > 0)
	{
		*y += ft_putchar('0');
		var->prec--;
	}
}

int		display_bis(t_var *var, int *i, int *y, char *str)
{
	if (!(var->len > var->prec && var->prec > 0))
	{
		if (var->right == FALSE)
		{
			while (*y < var->width - var->len)
				*y += ft_putchar(var->zero_space);
		}
		if (str[*i] == 0 && var->conv == 'c')
			*i += ft_putchar(str[*i]);
		while (str[*i])
			*i += ft_putchar(str[*i]);
		if (str[*i] == '\0' && var->conv == 'p')
			spec_case(var, y);
	}
	if (var->right == TRUE)
	{
		while (*y < var->width - *i)
		{
			var->zero_space = ' ';
			ft_putchar(var->zero_space);
			*y = *y + 1;
		}
	}
	return (*i + *y);
}

int		ft_display(char *str, t_var var)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (str == NULL)
		return (ft_display("(null)", var));
	var.len = ft_strlen(str);
	if (str[i] == 0 && var.conv == 'c')
		var.len = 1;
	if (var.conv == '%' && var.right == TRUE)
		var.zero_space = ' ';
	if (var.len > var.prec && var.prec > 0)
	{
		if (var.right == FALSE)
		{
			while (y < var.width - var.prec)
				y += ft_putchar(var.zero_space);
		}
		while (str[i] && i < var.prec)
			ft_putchar(str[i++]);
	}
	return (display_bis(&var, &i, &y, str));
}
