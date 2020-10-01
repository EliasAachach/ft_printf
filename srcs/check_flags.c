#include "ft_printf.h"

int		check_flag(const char
*str, int len, int i)
{
	int y;

	y = i;
	while (str[y])
	{
		if (str[y] == '-')
		{
			//FAIRE UN BAIL
		}
		y++;
	}
}
