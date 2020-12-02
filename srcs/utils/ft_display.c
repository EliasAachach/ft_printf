#include "ft_printf.h"

int ft_display(char *str, t_var var)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (str == NULL)
	{
		i = ft_display("(null)", var);
		return (i);
	}
	if (ft_strlen(str) > var.prec && var.prec > 0)
	{
		while (y < var.width - var.prec)
		{
			y += ft_putchar(var.zero_space);
		}
		while (str[i] && i < var.prec)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		while (y < var.width - ft_strlen(str))
		{
			y += ft_putchar(var.zero_space);
		}
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	if (var.right == TRUE)
	{
		while (i < var.width)
		{
			ft_putchar(var.zero_space);
			i++;
		}
	}
	return (i + y);
}
