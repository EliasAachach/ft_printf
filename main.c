#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	va_list	arg;
	t_ptf ptf;

	i = 0;
	ptf.total_len = 0
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ptf.total_len += ft_putchar(str[i]);
		}
		else
		{
			parsing(str, &(ptf.total_len));
		}
		i++;
	}
	return (ptf.total_len);
}
