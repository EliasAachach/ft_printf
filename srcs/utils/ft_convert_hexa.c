/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 17:17:19 by elaachac          #+#    #+#             */
/*   Updated: 2020/12/30 19:31:12 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void	convert_stock(int nbr, int maj, char *nbr_final, int final_len)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	nbr_final[final_len] = base[nbr];
}

void	bis(unsigned int nbr, unsigned int final_len, char *nbr_final, int maj)
{
	unsigned int	tmp;
	unsigned int	q;
	unsigned int	r;

	tmp = 0;
	q = nbr / 16;
	r = nbr % 16;
	convert_stock(r, maj, nbr_final, final_len);
	final_len--;
	while (q >= 16)
	{
		tmp = q;
		q = tmp / 16;
		r = tmp % 16;
		convert_stock(r, maj, nbr_final, final_len);
		final_len--;
	}
	convert_stock(q, maj, nbr_final, final_len);
	final_len--;
	return ;
}

char	*ft_convert_hexa(unsigned int nbr, int maj)
{
	unsigned int	final_len;
	char			*nbr_final;

	final_len = ft_nbrlen_hexa(nbr);
	nbr_final = ((char *)malloc(sizeof(char) * (final_len + 1)));
	if (!nbr_final)
		return (NULL);
	nbr_final[final_len] = '\0';
	final_len--;
	if (nbr < 16)
	{
		convert_stock(nbr, maj, nbr_final, final_len);
		if (maj == 1)
			ft_toupper(nbr_final);
		return (nbr_final);
	}
	else
		bis(nbr, final_len, nbr_final, maj);
	if (maj == 1)
		ft_toupper(nbr_final);
	return (nbr_final);
}
