#include "ft_printf.h"

t_var	wich_convert(const	char *str, t_var var)
{
	int i;

	i = var.index;
	while(str[i])
	{
		if(str[i] == ' ')
		{
			var.index = i;
			return(var);
		}
		if (str[i] == 'c' || str[i] == 's' || str[i] ==
		'p' || str[i] == 'd' || str[i] == 'i' || str[i]
		== 'u' || str[i] == 'x' || str[i] == 'X' ||
		str[i] == '%')
		{
			var.conv = str[i];
			var.index = i;
			return(var);
		}
		i++;
	}
	return(var);
}
