#include "ft_printf.h"

int	check_width(const char *str)
{
	int i;
	char check_width[3];
	int width;
	char zero_space;

	i = 0;
	width = 0;
	zero_space = ' ';
	while (str[i])
	{
		if (str[i] == '0')
		{
			zero_space = '0';
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
	return (zero_space, width)
}
