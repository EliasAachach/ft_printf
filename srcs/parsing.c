#include "ft_printf.h"

int parsing(const char *str,   int len)
{
	check_flag(str, len);
	check_width(str, len);
	check_precision(str, len);
	check_convert(str, len);
	return (len);
}
