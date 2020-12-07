#include "includes/ft_printf.h"
int	main()
{
	unsigned int i = 2147483747;
//	unsigned int u = 21474837;
//	printf("\n%d", ft_printf("%c", 'c'));
//	printf("\ns : %d\n", ft_printf("%-09s", "hello"));
//	printf("\ns : %d\n", printf("%-09s", "hello"));
//	printf("\np : %d", ft_printf("%p", &i));
//	printf("\nd : %d", ft_printf("%.6d", 123));
//	printf("\nd : %d", printf("\n%.6d", 123));
	printf("\ni : %d", ft_printf("%07i", -54));
	printf("\ni : %d\n", printf("\n%07i", -54) - 1);
	printf("\ni : %d", ft_printf("%010.5i", -216));
	printf("\ni : %d", printf("\n%010.5i", -216) - 1);
//	printf("\nu : %d", ft_printf("%7u", i));
//	printf("\nu : %d", printf("\n%7u", i) - 1);
//	printf("\nx : %d", ft_printf("%x", 42));
//	printf("\nx : %d", printf("\n%x", 42));
//	printf("\nX : %d", ft_printf("%4.0X", 42));
//	printf("\nprcnt : %d", ft_printf("%3.0%"));
//	printf("\nprcnt : %d", printf("\n%3.0%") );
}
