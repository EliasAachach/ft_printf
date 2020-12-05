#include "ft_printf.h"

t_var		check_convert(const	char *str, t_var var, va_list arg)
{
	int		i;
	int		c_char;
	int		tmp;
	char	one_char[2];
	char	*tmp_str;

	c_char = 0;
	tmp = 0;
	one_char[1] = '\0';
	i = 0;
	if (var.conv == 0)
		return (var);
	if (var.conv == 'c')
	{
		c_char = va_arg(arg, int);
		one_char[0] = c_char;
		var.total_len += ft_display(one_char, var);
	}
	else if (var.conv == 's')
	{
		var.total_len += ft_display(va_arg(arg, char *), var);
	}
	else if (var.conv == 'p')
	{
		if ((tmp_str = ft_putmem((va_arg(arg, void *)))) == NULL)
		{
			var.total_len = -1;
			return(var);
		}
		var.total_len += ft_display(tmp_str, var);
	}
	else if (var.conv == 'd' || var.conv == 'i')
	{
		if ((tmp_str = ft_itoa(va_arg(arg, int))) == NULL)
			{
				var.total_len = -1;
				return(var);
			}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'u')
	{
		if ((tmp_str = ft_itoa_ui(va_arg(arg, int))) == NULL)
			{
				var.total_len = -1;
				return(var);
			}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'x')
	{
		if ((tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 0))
 == NULL)
			{
				var.total_len = -1;
				return(var);
			}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == 'X')
	{
		if ((tmp_str = ft_convert_hexa((unsigned int)va_arg(arg, int), 1))
 == NULL)
			{
				var.total_len = -1;
				return(var);
			}
		var.total_len += ft_display_diux(tmp_str, var);
	}
	else if (var.conv == '%')
	{;
		one_char[0] = '%';
		var.total_len += ft_display(one_char, var);
	}
	return (var);
}
