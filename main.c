#include "includes/ft_printf.h"
int	main()
{
	unsigned int i = 2147483747;
//	unsigned int u = 21474837;
//	printf("\nc : %d", ft_printf(" -%-2c* -%2c* ", 0, 0));
//	printf("\nc : %d\n", printf("\n -%-2c* -%2c* ", 0, 0) - 1);
	printf("\ns : %d\n", ft_printf("%.*s", 0, "hello"));
	printf("\ns : %d\n", printf("%.*s", 0, "hello"));
//	printf("\np : %d", ft_printf("%9.2p", 1234));
//	printf("\np : %d", printf("\n%9.2p", 1234) - 1);
//	printf("\nd : %d", ft_printf("%.d", -1011));
//	printf("\nd : %d", ft_printf("*%-5.d*", 0) - 2);
//	printf("\nd : %d", printf("\n*%-5.d*", 0) - 1 - 2);
//	printf("\nd : %d", ft_printf("\n%6.i", 0) - 1);
//	printf("\nd : %d", printf("\n%6.i", 0) - 1);
//	printf("\ni : %d", ft_printf("%.0i", 0));
//	printf("\ni : %d", printf("\n%.0i", 0) - 1);
//	printf("\nu : %d", ft_printf("%7u", i));
//	printf("\nu : %d", printf("\n%7u", i) - 1);
//	printf("\nx : %d", ft_printf("%x", 42));
//	printf("\nx : %d", printf("\n%x", 42));
//	printf("\nX : %d", ft_printf("%4.0X", 42));
//	printf("\nprcnt : %d", ft_printf("%3.0%"));
//	printf("\nprcnt : %d", printf("\n%3.0%") );
}
