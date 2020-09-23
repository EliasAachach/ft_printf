# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr, int *len)
{
	unsigned int n;

	*len = *len + 1;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr_ui(unsigned int nbr, int *len)
{
	unsigned int n;

	*len = *len + 1;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	if (n >= 10)
	{
		ft_putnbr_ui(nbr / 10);
	}
	ft_putchar(n % 10 + '0');
}

int main()
{
	
}
