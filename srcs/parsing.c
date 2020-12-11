#include "ft_printf.h"

t_var	parsing(const char *str, t_var var, va_list arg)
{
	var = check_flags(str, var);
	var = check_width(str, var, arg);
	var = check_precision(str, var, arg);
	var = wich_convert(str, var);
	if (var.conv == 's' && var.isprec == TRUE &&var.prec == 0)
		var.prec = -1;
	if (var.prec == - 1 && (var.conv == 's' || var.conv == 'c' || var.conv == '%'))
	{
		if (var.width > 0)
		{
			va_arg(arg, char *);
			var.total_len += ft_display("", var);
		}
		return (var);
	}
	var = check_convert(str, var, arg);
	return (var);
}