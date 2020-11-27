#include "ft_printf.h"

t_var	check_flags(const char	*str, t_var var)
{
	int i;

	i = var.index;
	var.right = FALSE;
	while (str[i])
	{
		if (str[i] == '-')
		{
			var.right = TRUE;
			var.index = i;
			return (var);
		}
		i++;
	}
	return (var);
}
