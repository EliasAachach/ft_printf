#include "ft_printf.h"

int ft_putstr(char *str, int prec)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		i = ft_putstr("(null)", prec);
		return (i);
	}
	while (str[i] || i <= prec)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
