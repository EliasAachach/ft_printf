int		check_convert(char *str)
{
	int i;
	i = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i + 1] == 'c')
		{
			ft_putchar(va_arg(arg, int) + 48);
			// incrementation de la taille totale
		}
		if (str[i + 1] == 's')
		{
			ft_putstr_fd(/*ARG*/, 1);
		}
		if (str[i + 1] == 'p')
		{
			//FAIRE UN AUTRE BAIL
		}
		if (str[i + 1] == 'd' || str[i + 1] == 'i')
		{
			//need to check the precision
			ft_putnbr_fd(/*ARG*/, 1);
		}
		if (str[i + 1] == 'u')
		{
			//FAIRE UN AUTRE BAIL
		}
		if (str[i + 1] == 'x')
		{
			//FAIRE UN AUTRE BAIL
		}
		if (str[i + 1] == 'X')
		{
			//FAIRE UN AUTRE BAIL
		}
		if (str[i + 1] == '%')
		{
			//FAIRE UN AUTRE BAIL
		}
		i++;
	}
}
