#include "ft_printf.h"

int	check_width(const char *str)
{
	int i;
	int width;
	int zero;

	i = 0;
	width = 0;
	zero = FALSE;
	while (str[i])
	{
		if (str[i] == '0')
		{
			zero = TRUE;
			//DIRE QUE SI ZERO EST TRUE ALORS ON PUTCHAR '0' AU
			//LIEU DE PUTCHAR ' '
		}
		if (str[i] == '*')
		{
			width = va_arg(arg, int);
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			width +=ft_atoi(str[i]);
			i++;
		}
		i++;
	}
			//WIDTH - LEN DE CE QUI EST ECRIT = NBR DE ' ' A
			//ECRIRE
	return (zero, width)
}
