#include "ft_printf.h"

int parsing(const char *str,   int len)
{
	check_flag(str);
	check_width(str);
	check_precision(str);
	check_convert(str);
	return (len);
}
