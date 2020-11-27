#include "ft_printf.h"

t_var	wich_convert(const	char *str, t_var var)
{
	while(str[var.index])
	{
		if(str[var.index] == ' ')
			return(var);
		if (str[var.index] == 'c' || str[var.index] == 's' || str[var.index] ==
		'p' || str[var.index] == 'd' || str[var.index] == 'i' || str[var.index]
		== 'u' || str[var.index] == 'x' || str[var.index] == 'X' ||
		str[var.index] == '%')
		{
			var.conv = str[var.index];
			ft_putchar(str[var.index]);
			ft_putchar('\n');
			ft_putchar(var.conv);
			return(var);
		}
		var.index++;
	}
	return(var);
}
