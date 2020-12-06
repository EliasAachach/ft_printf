#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	arg;
	t_var var;

	var.conv = 0;
	var.right = 0;
	var.prec = 0;
	var.width = 0;
	var.zero_space = 0;
	var.total_len = 0;
	var.index = 0;
	var.identifier = "cspdiuxX%";
	va_start(arg, str);

	while (str[var.index])
	{
		if (str[var.index] == '%')
		{
			var.index++;
			var = parsing(str, var, arg);
			if (var.total_len == -1)
				return (var.total_len);
			var.index++;
		}
		else
		{
			var.total_len += ft_putchar(str[var.index]);
			var.index++;
		}
	}
	va_end(arg);
	return (var.total_len);
}
