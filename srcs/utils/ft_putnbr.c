#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned	int n;
	static		int len;

	len = 0;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	len += ft_putchar(n % 10 + '0');
	return (len);
}
