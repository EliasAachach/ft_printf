#include "ft_printf.h"

int	check_width(const char *str)
{
	int i;
	int width;
	char zero;

	i = 0;
	width = 0;
	zero = ' ';
	while (str[i])
	{
		if (str[i] == '0')
		{
			zero = '0';
		}
		if (str[i] == '*')
		{
			width = va_arg(arg, int);
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			width = ft_atoi(str + i);
		}
		i++;
	}
			//WIDTH - LEN DE CE QUI EST ECRIT = NBR DE ' ' A
			//ECRIRE
	return (zero, width)
}
