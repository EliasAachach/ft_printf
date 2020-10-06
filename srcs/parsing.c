#include "ft_printf.h"

int parsing(const char *str,   int len)
{
	int right;
	int prec;
	int	width;
	int zero;

	check_flag(str, right);
	check_width(str, width, zero);
	check_precision(str, prec);
	check_convert(str, right, width, zero, prec);
	return (len);
}
