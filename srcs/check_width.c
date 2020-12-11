#include "ft_printf.h"

t_var	check_width(const char *str, t_var var, va_list arg)
{
	int i;
	int y;

	y = 0;
	i = var.index;
	var.zero_space = ' ';
	var.width = 0;
	while (str[i] && str[i] != '.')
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
		if (str[i] == '0')
		{
			var.zero_space = '0';
			if (str[i + 1] == '*' || (str[i + 1] >= '0' && str[i + 1] <= '9'))
				i++;
		}
		if (str[i] == '*')
		{
			var.width = va_arg(arg, int);
			if (var.width < 0)
			{
				var.width = -var.width;
				var.right = TRUE;
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			var.width = ft_atoi(str + i);
			var.index = i;
			return (var);
		}
		if (var.width > 0)
			return (var);
		i++;
	}
	return (var);
}
