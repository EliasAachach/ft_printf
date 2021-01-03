/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 15:17:05 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/03 12:41:05 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	init(t_var var)
{
	var.len = 0;
	var.conv = 0;
	var.right = 0;
	var.prec = 0;
	var.width = 0;
	var.zero_space = 0;
	var.total_len = 0;
	var.index = 0;
	var.isprec = 0;
	var.diux = 0;
	var.errorprec = 0;
	var.iszero = 0;
	var.identifier = "cspdiuxX%";
	return (var);
}
