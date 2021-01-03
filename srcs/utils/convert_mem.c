/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 17:41:50 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/03 12:14:01 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_mem(unsigned long long int nbr, char *nbr_final, \
			 unsigned long long int final_len)
{
	unsigned long long int	i;
	char					*base;

	i = 0;
	base = "0123456789abcdef";
	nbr_final[final_len] = base[nbr];
}
