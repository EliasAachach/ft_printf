/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 12:37:47 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/03 12:38:37 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ui(unsigned int nbr)
{
	unsigned int	n;
	static int		len;

	len = 0;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n >= 10)
	{
		ft_putnbr_ui(nbr / 10);
	}
	len += ft_putchar(n % 10 + '0');
	return (len);
}
