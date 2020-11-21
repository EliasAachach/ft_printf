#include "ft_printf.h"

t_var		check_convert(char *str, t_var var, va_list arg)
{
	int i;
	char one_char[2];

	i = 0;
	if (var.conv == 0)
		return (var);
	if (var.conv == 'c')
	{
		one_char[0] = va_arg(arg, char);
		var.total_len += ft_display(one_char, var);
	}
	else if (var.conv == 's')
	{
		var.total_len += ft_display(va_arg(arg, char *), var);
	}
	else if (var.conv == 'p')
	{
		var.total_len += ft_putmem((va_arg(arg, void *)));
	}
	else if (var.conv == 'd' || var.conv == 'i')
	{
		ft_putnbr(va_arg(arg, int),
				&(var.total_len));
	}
	else if (var.conv == 'u')
	{
		ft_putnbr_ui((unsigned
					int)va_arg(arg, int), var.total_len);
	}
	else if (var.conv == 'x')
	{
		var.total_len += if (ft_convert_hexa((unsigned int)va_arg(arg, int), 0) == -1)
	}
	else if (var.conv == 'X')
	{
		var.total_len += ft_convert_hexa((unsigned int)va_arg(arg, int), 1);
	}
	else if (var.conv == '%')
	{
		var.total_len += ft_putchar('%');
	}
	return (var);
}
