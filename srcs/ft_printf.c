#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	va_list	arg;
	t_var var;

	i = 0;
	var.conv = 0;
	var.right = 0;
	var.prec = 0;
	var.width = 0;
	var.zero_space = 0;
	var.total_len = 0;
	va_start(arg, str);

	while (str[i])
	{
		if (str[i] == '%')
		{
			parsing(str, var);
		}
		else
			var.total_len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (var.total_len);
}
