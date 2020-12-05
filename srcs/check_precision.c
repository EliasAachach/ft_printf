#include "ft_printf.h"

t_var		check_precision(const char *str,
t_var var, va_list arg)
{
	int i;

	i = var.index;
	var.prec = 0;
	while (str[i])
	{
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd' || str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X' || str[i] == '%')
			return (var);
		else if (str[i] == '.')
		{
			if (str[i + 1] == '*')
			{
				var.prec = va_arg(arg, int);
			}
			if ((str[i + 1] >= 'a' &&
			str[i + 1] <= 'z') ||
			str[i + 1] == '0' && str[i
			+ 2] >= 'a' && str[i + 2]
			<= 'z')
			{
				if (str[i + 1] == 'c'
				|| str[i + 1] == 's'
				|| str[i + 1] == 'p'
				|| str[i + 1] == 'd'
				|| str[i + 1] == 'i'
				|| str[i + 1] == 'u'
				|| str[i + 1] == 'x'
				|| str[i + 1] == 'X'
				|| str[i + 1] == '%'
				|| str[i + 1] == '0')
					var.prec = -1;
					var.index += i;
					return (var);
			}
			else
			{
				var.prec = ft_atoi(str + (i + 1));
				var.index = i;
				return (var);
			}
		}
		i++;
	}
	return (var);
}