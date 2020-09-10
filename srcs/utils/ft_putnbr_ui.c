#include "printf.h"

void	ft_putnbr_ui(unsigned int nbr, int *len)
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
		ft_putnbr_ui(nbr / 10);
	}
	ft_putchar(n % 10 + '0');
}
