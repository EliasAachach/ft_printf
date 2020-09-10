#include "ft_printf.h"

int parsing(const char *str,   int *ptf.total_len)
{
	int i;

	i = 0;

	//check si ya une precision :
	while (str[i] != '.')
	{
		i++;
	}


	check_width;
	check_precision;
	check_convert(str, ptf.total_len);
}
