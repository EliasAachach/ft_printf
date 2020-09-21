#include "ft_printf.h"

int ft_nbrlen_hexa(unsigned int nbr)
{
	int len;
	unsigned int n;

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
