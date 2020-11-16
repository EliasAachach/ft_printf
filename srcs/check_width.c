#include "ft_printf.h"

t_var	check_width(const char *str, t_var var)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0')
		{
			var.zero_space = '0';
		}
		if (str[i] == '*')
		{
			var.width = va_arg(arg, int);
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			var.width = ft_atoi(str + i);
		}
		i++;
	}
	return (var);
}
