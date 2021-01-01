/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 19:32:09 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/01 16:28:12 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_display(char *str, t_var var)
{
	int i;
	int y;
	int len;

	i = 0;
	y = 0;
	if (str == NULL)
	{
		i = ft_display("(null)", var);
		return (i);
	}
	len = ft_strlen(str);
	if (str[i] == 0 && var.conv == 'c')
		len = 1;
	if (var.conv == '%' && var.right == TRUE)
		var.zero_space = ' ';

	if (len > var.prec && var.prec > 0)
	{
		if (var.right == FALSE)
		{
			while (y < var.width - var.prec)
			{
				y += ft_putchar(var.zero_space);
			}
		}
		while (str[i] && i < var.prec)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		if (var.right == FALSE)
		{
			while (y < var.width - len)
			{
				y += ft_putchar(var.zero_space);
			}
		}
			if (str[i] == 0 && var.conv == 'c')
			{
				i += ft_putchar(str[i]);
			}
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	if (var.right == TRUE)
	{
		while (y < var.width - i)
		{
			var.zero_space = ' ';
			ft_putchar(var.zero_space);
			y++;
		}
	}
	return (i + y);
}