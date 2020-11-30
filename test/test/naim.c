#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
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

char	*fillstr(char a, char *str)
{
	int i = 0;
	ft_putchar('z');
	while(str[i])
	{
	ft_putchar('a');
		str[i] = a;
		i++;
	}
	ft_putchar('b');
	ft_putchar('\n');
	str[i] = '\0';
	printf("%s", str);
	return (str);
}

int main()
{
//	char a = 'a';
//	char str[3];
//	fillstr(a, str);
	//printf("%9s", "bonjour");
	printf("%c", '0');
//	ft_putstr(str);
}
