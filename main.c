#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	va_list	arg;

	i = 0;
	ptf.total_len = 0
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i])
			ptf.total_len++;
		}
		else
		{
			parsing(va_arg(arg, char*));
		}
		i++;
	}
	return (ptf.total_len);
}
