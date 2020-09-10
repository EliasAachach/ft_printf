#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	va_list	arg;
	t_ptf ptf;

	i = 0;
	ptf.total_len = 0;
	va_start(arg, str);

	while (str[i] != '%')
	{
		i++;
		if (str[i] == '\0')
			ptf.total_len += ft_putstr(str);
	}
	if (ptf.total_len == 0)
		parsing(str, &(ptf.total_len));
	va_end(arg);
	return (ptf.total_len);
}
