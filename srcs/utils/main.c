#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
void	ft_putnbr(int nbr, int *len)
{
	unsigned int n;

	*len = *len + 1;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n >= 10)
	{
		ft_putnbr(nbr / 10, len);
	}
	ft_putchar(n % 10 + '0');
}

int ft_nbrlen_hexa(unsigned int nbr)
{
	int len;
	unsigned int n;

	len = 0;
	if (nbr < 0)
	{
		len++;
		n = -nbr;
	}
	n = nbr;
	if (nbr == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
	ft_putnbr(len, 0);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

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
	printf("%d", final_len);
	ft_putchar('\n');
	if (!(nbr_final = (char *)malloc(sizeof(char) * (final_len + 1))))
		return (-1);
	nbr_final[final_len] = '\0';
	final_len--;
	if (nbr < 0)
	{
		nbr = -nbr;
		nbr_final[0] = '-';
	}
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
		while (q > 16)
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

int main()
{
	printf("%d", ft_convert_hexa(-300, 0));
}
