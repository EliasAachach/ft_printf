#include "ft_printf.h"

t_var		check_precision(char *str,
t_var var)
{
	int i;

	i = 0;
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
			}
		}
		i++;
	}
	return (var);
}
