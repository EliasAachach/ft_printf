#include "ft_printf.h"

int		check_flag(const char
*str, int len)
{
	int i;
	int right;

	right = FALSE;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			right = TRUE;
		}
		i++;
	}
}
