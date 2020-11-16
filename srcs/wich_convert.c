#include "ft_printf.h"

t_var	wich_convert(char *str, t_var var)
{
	while(str[i])
	{
		if(str[i] == ' ')
			return(var);
		if (str[i] == 'c' || str[i] == 's' || str[i] ==
		'p' || str[i] == 'd' || str[i] == 'i' || str[i]
		== 'u' || str[i] == 'x' || str[i] = 'X' ||
		str[i] == '%')
		{
			var.conv = str[i];
			return(var);
		}
		i++;
	}
	return(var);
}
