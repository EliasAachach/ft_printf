#include "ft_printf.h"

t_var	check_flag(const char	*str, t_var var)
{
	int i;

	var.right = FALSE;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			var.right = TRUE;
		}
		i++;
	}
	return (var);
}
