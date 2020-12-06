#include "ft_printf.h"

t_var	parsing(const char *str, t_var var, va_list arg)
{
	var = check_flags(str, var);
	var = check_width(str, var, arg);
	var = check_precision(str, var, arg);
	var = wich_convert(str, var);
	if (var.prec == -1)
	{
		if (var.width > 0)
		{
			var.total_len += ft_display("", var);
		}
		return (var);
	}
	var = check_convert(str, var, arg);
	return (var);
}