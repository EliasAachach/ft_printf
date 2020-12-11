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
	if (var.prec == -1 && len == 1 && str[0] == '0')
	{
		if (var.width > 0)
		{
			var.total_len += ft_display("", var);
			return (var.width);
		}
		else
			return (0);
	}
	if (var.right == TRUE)
		var.zero_space = ' ';
	if (var.diux == TRUE && len == 1 && str[0] == '0' && var.isprec == TRUE && var.width > 0 && var.right == FALSE)
	{
		var.width++;
	}
	if (str == NULL)
	{
		i = ft_display("(null)", var);
		return (i);
	}
	if (len > var.prec && var.prec > 0)
	{
		if (var.right == FALSE)
		{
			var.zero_space = ' ';
			while (y < var.width - len)
			{
				y += ft_putchar(var.zero_space);
			}
		}
		if (var.diux == TRUE && len == 1 && str[0] == '0' && var.isprec == TRUE)
		{
			str[0] = '\0';
		}
			while (str[i])
			{
				ft_putchar(str[i]);
				i++;
			}
	}
	else
	{
		if (str[i] == '-' && var.zero_space == '0' && var.prec == 0)
		{
			var.total_len += ft_putchar(str[i]);
			i++;
			if (var.width > 0 && var.prec > 0)
			{
				len--;
			}
		}
		if (var.right == FALSE)
		{
			if (var.width > len)
			{
				if (var.prec > 0)
				{
					var.zero_space = ' ';
					if (str[0] == '-')
						var.width--;
					while (y < var.width - var.prec)
						y += ft_putchar(var.zero_space);
				}
				else
					while (y < var.width - len)
						y += ft_putchar(var.zero_space);
				
			}
		}
		if (str[i] == '-')
		{
			var.total_len += ft_putchar(str[i]);
			i++;
			len--;
		}
		while(j < var.prec - len)
		{
			j += ft_putchar('0');
		}
		if (var.diux == TRUE && len == 1 && str[0] == '0' && var.isprec == TRUE)
		{
			str[0] = '\0';
		}
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
