#include "ft_printf.h"

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str)
	{
		ft_putchar(*str);
		i++;
	}
	return (i);
}
