#include "ft_printf.h"

t_var	check_width(const char *str, t_var var, va_list arg)
{
	int i;

	i = var.index;
	var.zero_space = ' ';
	var.width = 0;
	while (str[i] && str[i] != '.')
	{
		if (str[i] == '0')
		{
			var.zero_space = '0';
		}
		if (str[i] == '*')
		{
			var.width = va_arg(arg, int);
			if (var.width < 0)
				var.width = -var.width;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			var.width = ft_atoi(str + i);
			var.index = i;
			return (var);
		}
		i++;
	}
	return (var);
}
