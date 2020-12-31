/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:32:12 by elaachac          #+#    #+#             */
/*   Updated: 2020/12/30 16:32:13 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	check_flags(const char	*str, t_var var)
{
	int	i;
	int	y;

	y = 0;
	i = var.index;
	var.right = FALSE;
	while (str[i])
	{
		y = 0;
		while (var.identifier[y])
		{
			if (str[i] == var.identifier[y])
				return (var);
			y++;
		}
		if (str[i] == '-')
		{
			var.right = TRUE;
			var.index = i;
			return (var);
		}
		i++;
	}
	return (var);
}
