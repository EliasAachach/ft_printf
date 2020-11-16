t_var		check_convert(char *str,
		var)
{
	int i;
	char one_char[2];

	i = 0;
	if (!str)
		return (0);
	if (str[i + 1] == 'c')
	{
		one_char[0] = va_arg(arg, char);
		var.total_len += ft_display(one_char);
	}
	else if (str[i + 1] == 's')
	{
		var.total_len += ft_display(va_arg(arg, char *), prec,
				zero_space, right);
	}
	else if (str[i + 1] == 'p')
	{
		var.total-len += ft_putmem((va_arg(arg, void *)));
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
	{
		ft_putnbr(va_arg(arg, int),
				&(var.total_len));
	}
	else if (str[i + 1] == 'u')
	{
		ft_putnbr_ui((unsigned
					int)va_arg(arg, int), var.total_len);
	}
	else if (str[i + 1] == 'x')
	{
		var.total_len += if (ft_convert_hexa((unsigned int)va_arg(arg, int), 0) == -1)
	}
	else if (str[i + 1] == 'X')
	{
		var.total_len += ft_convert_hexa((unsigned int)va_arg(arg, int), 1);
	}
	else if (str[i + 1] == '%')
	{
		var.total_len += ft_putchar('%');
	}
	return (var);
}
