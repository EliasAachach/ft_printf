#include "ft_printf.h"

int	check_width(const char *str, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '*')
		{
			//FAIRE UN BAIL AVEC	va_arg(arg, int) POUR RECUPERER LA LARGEUR DONNEE EN ARG
		}
	}
}
