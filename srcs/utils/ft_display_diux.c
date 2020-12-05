#include "ft_printf.h"

int ft_display_diux(char *str, t_var var)
{
	int len;
	int i;
	int y;
	int j;

	len = ft_strlen(str);
	i = 0;
	y = 0;
	j = 0;
	if (str == NULL)
	{
		i = ft_display("(null)", var);
		return (i);
	}
	if (len > var.prec && var.prec > 0)
	{
		if (var.right == FALSE)
		{
			while (y < var.width - len)
			{
				y += ft_putchar(var.zero_space);
			}
		}
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		if (var.right == FALSE)
		{
			if (var.width > len)
			{
				if (var.prec > 0)
					while (y < var.width - (len - (len - var.prec)))
						y += ft_putchar(var.zero_space);
				else
					while (y < var.width - len)
						y += ft_putchar(var.zero_space);
				
			}
		}
		while(j < var.prec - len)
			j += ft_putchar('0');
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	if (var.right == TRUE)
	{
		while (y < var.width - i - j)
		{
			ft_putchar(var.zero_space);
			y++;
		}
	}
	return (i + y + j);
}
