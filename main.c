#include "includes/ft_printf.h"
int	main()
{
	unsigned int i = 2147483747;
//	unsigned int u = 21474837;
	printf("\nc : %d", ft_printf("%*c", -2, 'c'));
	printf("\nc : %d\n", printf("\n%*c", -2, 'c') - 1);
//	printf("\ns : %d\n", ft_printf("%-09s", "hello"));
//	printf("\ns : %d\n", printf("%09s", "hello"));
//	printf("\np : %d", ft_printf("%9.2p", 1234));
//	printf("\np : %d", printf("\n%9.2p", 1234) - 1);
//	printf("\nd : %d", ft_printf("%.6d", 123));
//	printf("\nd : %d", printf("\n%.6d", 123));
//	printf("\ni : %d", ft_printf("%08.3i", 8375));
//	printf("\nu : %d", ft_printf("%7u", i));
//	printf("\nu : %d", printf("\n%7u", i) - 1);
//	printf("\nx : %d", ft_printf("%x", 42));
//	printf("\nx : %d", printf("\n%x", 42));
//	printf("\nX : %d", ft_printf("%4.0X", 42));
//	printf("\nprcnt : %d", ft_printf("%3.0%"));
//	printf("\nprcnt : %d", printf("\n%3.0%") );
}
