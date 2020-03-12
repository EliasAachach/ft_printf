int		percent_count(const char  *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str)
	{
		if (str[i] == '%')
			count++;
		i++;
	}
	return (count);
}
