#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int		ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	unsigned int n;
	int len;

	len = 0;
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
	len += ft_putchar(n % 10 + '0');
	return(len);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft(int nbr)
{
	int i = 0;
	int n = 0;

	while(nbr > 10)
	{
		nbr = nbr / 10;
		i += ft_putchar(nbr % 10 + '0');
	}
	i += ft_putchar(nbr % 10 + '0');
	return (i);
}

char	*string(char	*str)
{
	str = "bonjour";
	return(str);
}

int main()
{
	char *str;
	str = string(str);
	printf("%d", ft_strlen(str));
	printf("\n%s",str);
}
