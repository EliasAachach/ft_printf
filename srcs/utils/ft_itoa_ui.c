#include "ft_printf.h"

int		ft_nbrlen_ui(unsigned int nbr, unsigned int unbr)
{
	int len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (unbr)
	{
		unbr = unbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_ui(unsigned int nbr)
{
	unsigned int	unbr;
	int				len;
	char			*nbr_final;

	unbr = nbr;
	len = ft_nbrlen_ui(nbr, unbr);
	if (!(nbr_final = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nbr < 0)
		unbr = -nbr;
	nbr_final[len--] = '\0';
	if (nbr == 0)
	{
		nbr_final[0] = '0';
		return (nbr_final);
	}
	while (len >= 0)
	{
		nbr_final[len] = unbr % 10 + '0';
		unbr = unbr / 10;
		len--;
	}
	if (nbr < 0)
		nbr_final[0] = '-';
	return (nbr_final);
}