#include "ft_printf.h"

t_var	check_flags(const char	*str, t_var var)
{
	int i;
	int y;

	y = 0;
	i = var.index;
	var.right = FALSE;
	while (str[i])
	{
		y = 0;
		while (var.identifier[y])
		{
			if (str[i] == var.identifier[y])
			{
				return (var);
			}
			y++;
		}
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
