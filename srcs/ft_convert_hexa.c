#include "ft_printf.h"

void		ft_toupper(char *str)
{
	int i;

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
	int i;
	char *base;

	i = 0;
	base = "0123456789abcdef";
	nbr_final[final_len] = base[nbr];
}

int		ft_convert_hexa(unsigned int nbr, int maj)
{
	unsigned int	q;
	unsigned int	r;
	unsigned int	tmp;
	unsigned int	final_len;
	char			*nbr_final;

	q = 0;
	r = 0;
	tmp = 0;
	final_len = ft_nbrlen_hexa(nbr);
	if (!(nbr_final = (char *)malloc(sizeof(char) * (final_len + 1))))
		return (-1);
	nbr_final[final_len] = '\0';
	final_len--;
	if (nbr < 16)
	{
		convert_stock(nbr, maj, nbr_final, final_len);
		return (ft_putstr(nbr_final));
	}
	else
	{
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
	}
	if (maj == 1)
		ft_toupper(nbr_final);
	return (ft_putstr(nbr_final));
}
