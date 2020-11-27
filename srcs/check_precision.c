#include "ft_printf.h"

t_var		check_precision(const char *str,
t_var var, va_list arg)
{
	int i;

	i = var.index;
	var.prec = FALSE;
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (str[i + 1] == '*')
			{
				var.prec = va_arg(arg, int);
			}
			else
			{
				var.prec = ft_atoi(str + i);
				var.index = i;
				return (var);
			}
		}
		i++;
	}
	return (var);
}
