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
			if (str[i + 1] == '*')
			{
				prec = va_arg(arg, int);
			}
			else
			{
				prec = ft_atoi(str + i);
			}
			prec = TRUE;
		}
		i++;
	}
	return (len)
}
