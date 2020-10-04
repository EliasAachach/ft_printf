#include "ft_printf.h"

int		check_precision(char *str, int len)
{
	int i;
	int prec;

	i = 0;
	prec = FALSE;
	while (str[i])
	{
		if (str[i] == '.')
		{
			prec = TRUE;
		}
		i++;
	}
	return (len)
}
