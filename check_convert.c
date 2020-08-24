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
		//FAIRE UN AUTRE BAIL
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
	{
		//need to check the precision
		ft_putnbr_fd(/*ARG*/, 1);
	}
	else if (str[i + 1] == 'u')
	{
		//FAIRE UN AUTRE BAIL
	}
	else if (str[i + 1] == 'x')
	{
		//FAIRE UN AUTRE BAIL
	}
	else if (str[i + 1] == 'X')
	{
		//FAIRE UN AUTRE BAIL
	}
	else if (str[i + 1] == '%')
	{
		//FAIRE UN AUTRE BAIL
	}
}
