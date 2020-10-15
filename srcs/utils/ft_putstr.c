#include "ft_printf.h"

int ft_putstr(char *str, int prec, char
		zero)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (str == NULL)
	{
		i = ft_putstr("(null)", prec, zero);
		return (i);
	}
	while (ft_strlen(str) < width && y
	<= width)
	{
		ft_putchar(zero);
		y++;
	}
	while (str[i] || i <= prec)
	{
		ft_putchar(str[i]);
		i++;
	}
	if (right == TRUE)
	{
		while (i < width)
		{
			ft_putchar(zero);
			i++;
		}
	}
	return (i + y);
}
