#include "ft_printf.h"

t_var		check_precision(const char *str,
t_var var, va_list arg)
{
	int i;
	int y;

	y = 0;
	i = var.index;
	var.prec = 0;
	var.isprec = FALSE;
	while (str[i])
	{
		y = 0;
		while (var.identifier[y])
		{
			if (str[i] == var.identifier[y])
			{
				return (var);
			}
			y++;
		}
		if (str[i] == '.')
		{
			var.isprec = TRUE;
			y = 0;
			if (str[i + 1] == '*')
			{
				var.prec = va_arg(arg, int);
			}
			while (var.identifier[y])
			{
				if (str[i + 1] == var.identifier[y])
				{
					if (var.identifier[y] == 'd')
					{
						var.diux = TRUE;
					}
					else
					{
						var.prec = -1;
						var.index = i;
						return (var);
					}
				}
				y++;
			}
			if (!(str[i + 1] == '*'))
			{
				var.prec = ft_atoi(str + (i + 1));
				if (var.prec == 0 && var.diux == FALSE)
				{
					var.prec = -1;
				}
				var.index = i;
				return (var);
			}
		}
		i++;
	}
	return (var);
}