#include "ft_printf.h"

int	check_width(const char *str, int len)
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
			//WIDTH - LEN DE CE QUI EST ECRIT = NBR DE ' ' A
			//ECRIRE
		}
	}
}
