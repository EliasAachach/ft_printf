#include "ft_printf.h"

int	ft_putnbr_ui(unsigned int nbr)
{
	unsigned int	n;
	static		int len;

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
	return (len);
}
