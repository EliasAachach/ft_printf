#include "ft_printf.h"

int ft_nbrlen_mem(unsigned long long int nbr)
{
	int len;
	unsigned long long int n;

	len = 0;
	n = nbr;
	if (nbr == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}

void	convert_mem(unsigned long long int nbr, char *nbr_final,\
			unsigned long long int final_len)
{
	unsigned long long int i;
	char *base;

	i = 0;
	base = "0123456789abcdef";
	nbr_final[final_len] = base[nbr];
}

int		ft_mem_hexa(unsigned long long int nbr)
{
	unsigned long long int	q;
	unsigned long long int	r;
	unsigned long long int	tmp;
	unsigned long long int	final_len;
	char			*nbr_final;

	q = 0;
	r = 0;
	tmp = 0;
	final_len = ft_nbrlen_mem(nbr);
	if (!(nbr_final = (char *)malloc(sizeof(char) * (final_len + 1))))
		return (-1);
	nbr_final[final_len] = '\0';
	final_len--;
	if (nbr < 16)
	{
		convert_mem(nbr, nbr_final, final_len);
		return (ft_putstr(nbr_final));
	}
	else
	{
		q = nbr / 16;
		r = nbr % 16;
		convert_mem(r, nbr_final, final_len);
		final_len--;
		while (q >= 16)
		{
			tmp = q;
			q = tmp / 16;
			r = tmp % 16;
			convert_mem(r, nbr_final, final_len);
			final_len--;
		}
		convert_mem(q, nbr_final, final_len);
		final_len--;
	}
	return (ft_putstr("0x") + ft_putstr(nbr_final));
}

int	ft_putmem(void *addr)
{
	return (ft_mem_hexa((unsigned long long int)addr));
}
