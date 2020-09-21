int		check_convert(char *str)
{
	int i;
	i = 0;

	if (!str)
		return (0);
	if (str[i + 1] == 'c')
	{
		ptf->total_len += ft_putchar(va_arg(arg, char) + 48);
	}
	else if (str[i + 1] == 's')
	{
		ptf->total_len += ft_putstr(va_arg(arg, char *), 1);
	}
	else if (str[i + 1] == 'p')
	{
		ptf->total-len = ft_putmem((va_arg(arg, void *)));
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
	{
		ft_putnbr(va_arg(arg, int), &(ptf->total_len));
	}
	else if (str[i + 1] == 'u')
	{
		ft_putnbr_ui((unsigned int)va_arg(arg, int), &(ptf->total_len));
	}
	else if (str[i + 1] == 'x')
	{
		ptf->total_len = ft_convert_hexa((unsigned int)va_arg(arg, int), 0);
	}
	else if (str[i + 1] == 'X')
	{
		ptf->total_len = ft_convert_hexa((unsigned int)va_arg(arg, int), 1);
	}
	else if (str[i + 1] == '%')
	{
		ptf->total_len += ft_putchar('%');
	}
}
