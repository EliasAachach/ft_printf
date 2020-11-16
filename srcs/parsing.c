#include "ft_printf.h"

t_var	parsing(const char *str, t_var var)
{
	var = check_flag(str, var);
	var = check_width(str, var);
	var = check_precision(str, var);
	var = wich_convert(str, var);
	var = check_convert(str, var);
	return (var);
}
