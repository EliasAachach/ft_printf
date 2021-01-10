#include "includes/ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

// int		main()
// {
//	int kebab = 0b101010;
//	printf("%d\n", ~0b0001);
//	kebab = (kebab & 1 << 0);
//	printf("%d\n", kebab);
//	printf("valeur absolue  %d\n", kebab &= 0x02);

//	printf("le vrai printf ==[%015d]\n", -200);
//	ft_printf("le rl printf [==][%015d]\n", -200);
//	ft_printf("%50.00-1s\n", "prout");
//	printf("[%d]\n", ft_printf("% 0   10d\n", 200));
//	printf("[%d]\n", printf("% 0   10d\n", 200));
//	ft_printf(" == [%d]\n", ft_printf("[%016.9d]\n", 200));
//	ft_printf("[==][%d]\n", printf("[%050.15u]\n", 200));
//	size_t	i = 15000000;
//	ft_printf("%zi\n", i);

//	printf("%d\n", printf("%S\n", L"\xF0\x9F\x94\xA5"));

//	printf("%.*d", (INT_MIN, 42));
//	printf(NULL);
//	ft_printf("%c\n", NULL);
	// ft_printf("%ls%s%s%ls\n", BBLU RED ITAL"A printf in \xF0\x9F\x94\xA5 " RESET, BLU" like that "RESET, MAG"ca ne m\xC3\xA9rite pas " RESET, LGREN SOUL ITAL"the outstanding project ?"RESET"\xF0\x9F\x91\x8C");
	// ft_printf("%s\n", LBLU "prout");
	// ft_printf("%ls\n", SOUL BLU"\xE2\xAD\x90 \xE2\xAD\x90 \xE2\xAD\x90"RESET);
	// ft_printf("%C\n", 0x1F525);
//	printf("%S\n", "é");

//	ft_printf("%2u\n", 2);
//	char *s = "abc";
//	ft_printf("%d\n", ft_printf("-->|%-8.8s|<--\n", s));
//	printf("%d\n", printf("-->|%-8.8s|<--\n", s));
//	printf("-->|%*.*%|<--\n", 2, -4);
//	printf("-->|%*.*%|<--\n", 2, -3);
//	ft_printf("-->|%*.*%|<--\n", 2, -4);
//	ft_printf("-->|%*.*%|<--\n", 2, -3);
//	ft_printf("-->|%-16.*s|<--\n", -1, s);
//	printf("-->|%-16.*s|<--\n", -1, s);
//	ft_printf("-->|%-16.-1s|<--\n", s);
//	printf("-->|%-16.-1s|<--\n", s);
//	printf("-->|%-16.*s|<--\n", 5, s);
//	ft_printf("-->|%-16.*s|<--\n", 5, s);
//	printf("-->|%-13.*s|<--\n", 0, s);
//	ft_printf("-->|%-13.*s|<--\n", 0, s);
//	printf("-->|%-13.s|<--\n", s);
//	ft_printf("-->|%-13.s|<--\n", s);


	// printf("%d\n", printf("b'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'\n"));
//	int		d = -12;
//	int		d = 198;
//	int		d = 0;
//	int64_t		llx = LLONG_MAX;//0xffffffffffffff79;
	// printf("-->|%5.1d|<--\n", d);
	// ft_printf("-->|%5.1d|<--\n\n", d);
	// printf("-->|%3.*d|<--\n", 1, d);
	// ft_printf("-->|%3.*d|<--\n\n", 1, d);
	// printf("-->|%0*.1d|<--\n", -4, d);
	// ft_printf("-->|%0*.1d|<--\n\n", -4, d);
	// printf("-->|%0*.1d|<--\n", -5, d);
	// ft_printf("-->|%0*.1d|<--\n\n", -5, d);
	// printf("-->|%--4.*d|<--\n", 2, d);
	// ft_printf("-->|%--4.*d|<--\n\n", 2, d);

	// printf("|%.1d|\n", d);
	// ft_printf("|%.1d|\n\n", d);
	// printf("|%.3d|\n", d);
	// ft_printf("|%.3d|\n\n", d);
	// printf("|%.3d|\n", d);
	// ft_printf("|%.3d|\n\n", d);
	// printf("|%.5d|\n", d);
	// ft_printf("|%.5d|\n\n", d);
	// printf("|%.0d|\n", d);
	// ft_printf("|%.0d|\n\n", d);

	// printf("|%.1d|\n", d);
	// ft_printf("|%.1d|\n\n", d);

	// printf("|%.2d|\n", d);
	// ft_printf("|%.2d|\n\n", d);

	// 	printf("|%.1d|\n", d);
	// ft_printf("|%.1d|\n\n", d);

	// printf("|%*.3d|\n", 3, d);
	// ft_printf("|%*.3d|\n", 3, d);

//	printf("-->|%.3d|<--\n", d);
//	ft_printf("-->|%.3d|<--\n",  d);

//	printf("-->|%*.d|<--\n", 4, d);
//	ft_printf("-->|%*.d|<--\n", 4, d);

//	printf("-->|%04.*d|<--\n", -1, d);
//	ft_printf("-->|%04.*d|<--\n", -1, d);
//	printf("-->|%04.-1d|<--\n", d);
//	ft_printf("-->|%04.-1d|<--\n", d);
//	printf("-->|%4.d|<--\n", d);
//	ft_printf("-->|%4.d|<--\n", d);
//	printf("-->|%-4.*d|<--\n", -1, d);
//	ft_printf("-->|%-4.*d|<--\n", -1, d);
//	printf("-->|%-4.*d|<--\n", 0, d);
//	ft_printf("-->|%-4.*d|<--\n", 0, d);
//	printf("-->|%*.*d|<--\n", 4, 3, d);
//	ft_printf("-->|%*.*d|<--\n", 4, 3, d);
//	printf("-->|%-*.0d|<--\n", -4, d);
//	ft_printf("-->|%-*.0d|<--\n", -4, d);
//	printf("-->|%-3.*d|<--\n", -1, d);
//	ft_printf("-->|%-3.*d|<--\n", -1, d);
	
	// printf("-->|%-3.d|<--\n", d);
	// ft_printf("-->|%-3.d|<--\n", d);
	// printf("-->|%-4.0d|<--\n", d);
	// ft_printf("-->|%-4.0d|<--\n", d);
	// printf("-->|%-.d|<--\n", d);
	// ft_printf("-->|%-1.d|<--\n", d);

//	printf("-->|%-3.-3d|<--\n", d);
//	ft_printf("-->|%-3.-3d|<--\n", d);
//	printf("-->|%-3.*d|<--\n", -3, d);
//	ft_printf("-->|%-3.*d|<--\n", -3, d);
//	printf("-->|%0*.*d|<--\n", 0, -4, d);
//	ft_printf("-->|%0*.*d|<--\n", 0, -4, d);
//	printf("[b'% 0+-#10.5lld]\n", d);
//	ft_printf("[b'% 0+-#10.5lld]\n", d);
//	printf("-->|%*.*llx|<--\n", -3, 0, llx);
//	ft_printf("-->|%*.*llx|<--\n", -3, 0, llx);
//	printf("-->|%*.*llx|<--\n", -4, -4, llx);
//	ft_printf("-->|%*.*llx|<--\n", -4, -4, llx);
//	unsigned int	u = 4294967295;
//	uintmax_t	lu = 18446744073709551615LU;
//	intmax_t ld = LLONG_MAX;
//	printf("-->|%-4.4u|<--\n", u);
//	ft_printf("-->|%-4.4u|<--\n", u);
//	printf("-->|%-4.4llu|<--\n", lu);
//	ft_printf("-->|%-4.4llu|<--\n", lu);
//	printf("%ld\n", sizeof(unsigned long long));
//	printf("%ld\n", sizeof(int));
//	printf("[b'%#x]\n", 123);
//	ft_printf("[b'%#x]\n", 123);
	// int		x = 0;
	// printf("-->|%#-4.x|<--\n", x);
	// ft_printf("-->|%#-4.x|<--\n", x);
	// printf("-->|%#-*.1x|<--\n", 1, x);
	// ft_printf("-->|%#-*.1x|<--\n", 1, x);
	// printf("-->|%#0*x|<--\n", 4, x);
	// ft_printf("-->|%#0*x|<--\n", 4, x);
	// printf("-->|%#-1.1x|<--\n", x);
	// ft_printf("-->|%#-1.1x|<--\n", x);

	// printf("b'%.5p\n", NULL);
	// ft_printf("b'%.5p\n", NULL);
	// printf("[b'%+10.1p]\n", NULL);
	// ft_printf("[b'%+10.1p]\n", NULL);
	// printf("b'%.10p\n", 4294967295);
	// ft_printf("b'%.10p\n", 4294967295);
	// printf("b'%#1.o\n", 0);
	// printf("b'%#1.o\n", 0);
	// printf("%    d\n", INT_MAX);
	// ft_printf("%    d\n", INT_MAX);
//	printf("b'%10.lld\n", 4294967295);
//	ft_printf("b'%10.lld\n", 4294967295);
	// printf("%d\n", printf("-->|%-3.*d|<--\n", 1, d));
	// ft_printf("%d\n", ft_printf("-->|%-3.*d|<--\n", 1, d));
	// printf("%d\n", printf("-->|%-4.*i|<--\n", -2, d));
	// ft_printf("%d\n", ft_printf("-->|%-4.*i|<--\n", -2, d));
	// printf("|%*.4d|\n", 3, d);
	// ft_printf("|%*.4d|\n", 3, d);

//	printf("SP-->|%-5d|<--\n", d);
//	ft_printf("SP-->|%-5d|<--\n\n", d);

//	printf("-->|%-4.*d|<--\n", -1, d);
//	ft_printf("-->|%-4.*d|<--\n", -1, d);
//	printf("-->|%-4.-1d|<--\n", d);
//	ft_printf("-->|%-4.-1d|<--\n", d);

//	printf("-->|%-16.**s|<--\n", 7, 6, s);
//	ft_printf("-->|%-16.**s|<--\n", 7, 6, s);

//	ft_printf("-->|%*.-4%|<--\n", 2);
//	ft_printf("-->|%*.-3%|<--\n", 2);
//	printf("-->|%*.-4%|<--\n", 2);
//	printf("-->|%*.-3%|<--\n", 2);

//	ft_printf("%.10d\n", -42);
//	ft_printf("faux== [%050.12d]\n", 105);
//	printf("vrai== [%050.12d]\n", 105);
//	printf("==[%d]\n", printf("%050.s\n", "prout"));
//	ft_printf("== %d\n", ft_printf("%050.s\n", "prout"));
//	ft_printf("%-*.*s\n", 9, -7, "alut ca");
//	printf("%-*.*s\n", 9, -7, "alut ca");

//	printf("%0000*.1c%0-*.*s\t%-0.1d%0*.14i%*u  %013x%.*X\n", 5, 's', 9, 7, "alut ca", INT_MIN, 16, INT_MAX, 13, UINT_MAX, INT_MAX - 42, 11, INT_MAX - 4242);
//	ft_printf("%0000*.1c%0-*.*s\t%-0.1d%0*.14i%*u  %013x%.*X\n", 5, 's', 9, 7, "alut ca", INT_MIN, 16, INT_MAX, 13, UINT_MAX, INT_MAX - 42, 11, INT_MAX - 4242);

//	printf("%013x%.*X\n", INT_MAX -42, 11, INT_MAX -4242);
//	ft_printf("%013x%.*X\n", INT_MAX - 42, 11, INT_MAX -4242);
//	printf("prouf[==]%.0-5d|\n", 0);
//	ft_printf("prout[==]%.0-5d|\n", 0);

//	printf("[%013.   #20o]\n", INT_MAX);
//	ft_printf("[%013.   #20o]\n", INT_MAX);

	// printf("%010c\n", 104);
	// ft_printf("%010c\n", 104);

//	printf("[%lc]\n", 2960);
//	ft_printf("[%lc]\n", 2960);

//	ft_printf("[%#b]\n", 255);
//	ft_printf("[%#b]\n", 127);
//	ft_printf("[%#b]\n", 128);

//	printf("[%#.x]\n", 0);
//	ft_printf("[%#.x]\n", 0);

	//printf("%  099d\n", 666);
	//printf("%2147483646d\n", 42);
// printf("%#067o\n", UINT_MAX);
// ft_printf("%#067o\n", UINT_MAX);
// printf("%#067x\n", UINT_MAX);
// ft_printf("%#067x\n", UINT_MAX);
// printf("%#067b\n", UINT_MAX);
// ft_printf("%#067b\n", UINT_MAX);
	// ft_printf("\u0280");

//	printf("%*d\n", -5, 42);
//	ft_printf("%*d\n", -5, 42);
//	printf("%.*d\n", 0, 42);
//	ft_printf("%.*d\n", 0, 42);
//	printf("%0000*.1c%0-*.*s\t%-0.1d%0*.14i%*u  %013x%.*X%17p\n", 5, 's', 9, 7, "alut ca", INT_MIN, 16, INT_MAX, 13, UINT_MAX, INT_MAX - 42, 11, INT_MAX - 4242);//, test_hard)
// }

void		red()
{
	printf("\033[1;31m");
}

void		green()
{
	printf("\033[0;32m");
}

void		reset()
{
	printf("\033[0m");
}

void		fail(int n)
{
	printf("test %d: ", n);
	red();
	printf("FAIL\n");
	reset();
}

void		pass(int n)
{
	printf("test %d: ", n);
	green();
	printf("PASS\n");
	reset();
}

void		test_without_flags()
{
	if (printf("\n") == ft_printf("\n"))
		pass(1);
	else
		fail(1);
	if (printf("42\n") == ft_printf("42\n"))
		pass(2);
	else
		fail(2);
	if (printf("0\n") == ft_printf("0\n"))
		pass(3);
	else
		fail(3);
//	printf("ret = %d\nret = %d\n", printf("%42\n"), ft_printf("%42\n"));
	if (printf("          \n") == ft_printf("          \n"))
		pass(4);
	else
		fail(4);
	if (printf("\n", "test", 42) == ft_printf("\n", "test", 42))
		pass(5);
	else
		fail(5);
}

void		test_percent()
{
	if (printf("%%\n") == ft_printf("%%\n"))
		pass(1);
	else
		fail(1);
	if (printf("%%%\n") == ft_printf("%%%\n"))
		pass(2);
	else
		fail(2);
	if (printf("%%%%\n") == ft_printf("%%%%\n"))
		pass(3);
	else
		fail(3);
	if (printf("%%\n", "test") == ft_printf("%%\n", "test"))
		pass(4);
	else
		fail(4);
	if (printf("%\n") == ft_printf("%\n"))
		pass(5);
	else
		fail(5);
}

void		test_c()
{
	if (printf("%c\n", 42) == ft_printf("%c\n", 42))
		pass(1);
	else
		fail(1);
	if (printf("%c\n", 0) == ft_printf("%c\n", 0))
		pass(2);
	else
		fail(2);
	if (printf("lol%cabc%cdef\n", '4', '2') ==
		ft_printf("lol%cabc%cdef\n", '4', '2'))
		pass(3);
	else
		fail(3);
}

void		test_s()
{
	if (printf("%s\n", "") == ft_printf("%s\n", ""))
		pass(1);
	else
		fail(1);
	if (printf("%s\n", "aaaaaaaaaa") == ft_printf("%s\n", "aaaaaaaaaa"))
		pass(2);
	else
		fail(2);
//	printf("ret = %d\nret = %d\n", printf("%s\n", "aaaaaaaaaa"), ft_printf("%s\n", "aaaaaaaaaa"));
	if (printf("aaa%sccc%seee\n", "bbb", "ddd") ==
		ft_printf("aaa%sccc%seee\n", "bbb", "ddd"))
		pass(3);
	else
		fail(3);
	if (printf("%s\n", NULL) == ft_printf("%s\n", NULL))
		pass(4);
	else
		fail(4);
}

void		test_int()
{
	if (printf("%d\n", 0) == ft_printf("%d\n", 0))
		pass(1);
	else
		fail(1);
	if (printf("%d\n", 42) == ft_printf("%d\n", 42))
		pass(2);
	else
		fail(2);
	if (printf("%d\n", INT_MIN) == ft_printf("%d\n", INT_MIN))
		pass(3);
	else
		fail(3);
	if (printf("%d\n", INT_MAX) == ft_printf("%d\n", INT_MAX))
		pass(4);
	else
		fail(4);
	if (printf("%i\n", 0) == ft_printf("%i\n", 0))
		pass(5);
	else
		fail(5);
	if (printf("%i\n", 42) == ft_printf("%i\n", 42))
		pass(6);
	else
		fail(6);
	if (printf("%i\n", INT_MIN) == ft_printf("%i\n", INT_MIN))
		pass(7);
	else
		fail(7);
	if (printf("%i\n", INT_MAX) == ft_printf("%i\n", INT_MAX))
		pass(8);
	else
		fail(8);
	if (printf("%u\n", 0) == ft_printf("%u\n", 0))
		pass(9);
	else
		fail(9);
	if (printf("%u\n", 42) == ft_printf("%u\n", 42))
		pass(10);
	else
		fail(10);
	if (printf("%u\n", UINT_MAX - 1) == ft_printf("%u\n", UINT_MAX - 1))
		pass(11);
	else
		fail(11);
	if (printf("%u\n", UINT_MAX) == ft_printf("%u\n", UINT_MAX))
		pass(12);
	else
		fail(12);
}

void		test_hex()
{
	if (printf("%p\n", NULL) == ft_printf("%p\n", NULL))
		pass(1);
	else
		fail(1);
	if (printf("%p\n", "abc") == ft_printf("%p\n", "abc"))
		pass(2);
	else
		fail(2);
	if (printf("%xa\n", 15) == ft_printf("%xa\n", 15))
		pass(3);
	else
		fail(3);
	if (printf("%xa\n", 16) == ft_printf("%xa\n", 16))
		pass(4);
	else
		fail(4);
	if (printf("%x\n", INT_MIN) == ft_printf("%x\n", INT_MIN))
		pass(5);
	else
		fail(5);
	if (printf("%x\n", UINT_MAX + 1) == ft_printf("%x\n", UINT_MAX + 1))
		pass(6);
	else
		fail(6);
	if (printf("%Xa\n", 15) == ft_printf("%Xa\n", 15))
		pass(7);
	else
		fail(7);
	if (printf("%Xa\n", 16) == ft_printf("%Xa\n", 16))
		pass(8);
	else
		fail(8);
	if (printf("%X\n", INT_MIN) == ft_printf("%X\n", INT_MIN))
		pass(9);
	else
		fail(9);
	if (printf("%X\n", INT_MAX) == ft_printf("%X\n", INT_MAX))
		pass(10);
	else
		fail(10);
	if (printf("%x\n", 0) == ft_printf("%x\n", 0))
		pass(11);
	else
		fail(11);
	if (printf("%X\n", 0) == ft_printf("%x\n", 0))
		pass(12);
	else
		fail(12);
	if (printf("%x\n", -42) == ft_printf("%x\n", -42))
		pass(13);
	else
		fail(13);
	if (printf("%x\n", INT_MAX) == ft_printf("%x\n", INT_MAX))
		pass(14);
	else
		fail(14);
}

void		test_zero()
{
	if (printf("%0u\n", UINT_MAX) == ft_printf("%0u\n", UINT_MAX))
		pass(1);
	else
		fail(1);
//	printf("ret = %d\nret = %d\n", printf("%0u\n", UINT_MAX), ft_printf("%0u\n", UINT_MAX));
	if (printf("%050u\n", UINT_MAX) == ft_printf("%050u\n", UINT_MAX))
		pass(2);
	else
		fail(2);
	if (printf("%010u\n", UINT_MAX) == ft_printf("%010u\n", UINT_MAX))
		pass(3);
	else
		fail(3);
	if (printf("%011u\n", UINT_MAX) == ft_printf("%011u\n", UINT_MAX))
		pass(4);
	else
		fail(4);
	if (printf("%050.15u\n", 42) == ft_printf("%050.15u\n", 42))
		pass(5);
	else
		fail(5);
	if (printf("%014.25u\n", UINT_MAX) == ft_printf("%014.25u\n", UINT_MAX))
		pass(6);
	else
		fail(6);
	if (printf("%014d\n", INT_MIN) == ft_printf("%014d\n", INT_MIN))
		pass(7);
	else
		fail(7);
}

void		test_other()
{
	if (printf("%15.4d\n", -42) == ft_printf("%15.4d\n", -42))
		pass(1);
	else
		fail(1);
	if (printf("%.d, %.0d\n", 0, 0) == ft_printf("%.d, %.0d\n", 0, 0))
		pass(2);
	else
		fail(2);
	if (printf("%.p, %.0p\n", 0, 0) == ft_printf("%.p, %.0p\n", 0, 0))
		pass(3);
	else
		fail(3);
	if (printf("%.5p\n", 0) == ft_printf("%.5p\n", 0))
		pass(4);
	else
		fail(4);
	if (printf("%5p\n", 0) == ft_printf("%5p\n", 0))
		pass(5);
	else
		fail(5);
	if (printf("%*d\n", -5, 42) == ft_printf("%*d\n", -5, 42))
		pass(6);
	else
		fail(6);
	if (printf("%.*d\n", 0, 42) == ft_printf("%.*d\n", 0, 42))
		pass(7);
	else
		fail(7);
	if (printf("%.*s\n", 0, "42") == ft_printf("%.*s\n", 0, "42"))
		pass(8);
	else
		fail(8);
	if (printf("%3.1s\n", NULL) == ft_printf("%3.1s\n", NULL))
		pass(9);
	else
		fail(9);
	if (printf("%5.x %5.0xa\n", 0, 0) == ft_printf("%5.x %5.0xa\n", 0, 0))
		pass(10);
	else
		fail(10);
	if (printf("%.x %.0xa\n", 0, 0) == ft_printf("%.x %.0xa\n", 0, 0))
		pass(11);
	else
		fail(11);
	if (printf("%5.d %5.0da\n", 0, 0) == ft_printf("%5.d %5.0da\n", 0, 0))
		pass(12);
	else
		fail(12);
	if (printf("%*3d\n", 5, 0) == ft_printf("%*3d\n", 5, 0))
		pass(13);
	else
		fail(13);
	if (printf("%015%\n") == ft_printf("%015%\n"))
		pass(14);
	else
		fail(14);
	if (printf("%015s\n", "yo") == ft_printf("%015s\n", "yo"))
		pass(15);
	else
		fail(15);
	if (printf("%015c\n", 'c') == ft_printf("%015c\n", 'c'))
		pass(16);
	else
		fail(16);
	//printf("ret = %d\n", ft_printf("%.x %.0xa\n", 0, 0));
	//printf("ret = %d\n", printf("%.x %.0xa\n", 0, 0));
}

void		test_zerpot()
{
	if (printf("%.d\n", 0) == ft_printf("%.d\n", 0))
		pass(1);
	else
		fail(1);
	if (printf("%010.0i\n", 0) == ft_printf("%010.0i\n", 0))
		pass(2);
	else
		fail(2);
	if (printf("%0-10.0x\n", 0) == ft_printf("%0-10.0x\n", 0))
		pass(3);
	else
		fail(3);

	if (printf("[%21.0x]\n", 0) == ft_printf("[%21.0x]\n", 0))
		pass(4);
	else
		fail(4);

	if (printf("%0.s\n", "prout") == ft_printf("%0.s\n", "prout"))
		pass(5);
	else
		fail(5);
	if (printf("%-40.c\n", 104) == ft_printf("%-40.c\n", 104))
		pass(6);
	else
		fail(6);
	if (printf("%.%\n", 0) == ft_printf("%.%\n", 0))
		pass(7);
	else
		fail(7);
}

void		test_hard()
{
	if (printf("%0000*.1c%0-*.*s\t%-0.1d%0*.14i%*u  %013x%.*X%17p\n", 5, 's', 9, 7, "alut ca", INT_MIN, 16, INT_MAX, 13, UINT_MAX, INT_MAX - 42, 11, INT_MAX - 4242, test_hard) == ft_printf("%0000*.1c%0-*.*s\t%-0.1d%0*.14i%*u  %013x%.*X%17p\n", 5, 's', 9, 7, "alut ca", INT_MIN, 16, INT_MAX, 13, UINT_MAX, INT_MAX - 42, 11, INT_MAX - 4242, test_hard))
		pass(1);
	else
		fail(1);
}

void		test_bonus()
{
	if (printf("%+-d\n", 42) == ft_printf("%+-d\n", 42))
		pass(1);
	else
		fail(1);
	if (printf("[%+010i]\n", 0) == ft_printf("[%+010i]\n", 0))
		pass(2);
	else
		fail(2);
	if (printf("%+llu\n", LLONG_MAX) == ft_printf("%+llu\n", LLONG_MAX))
		pass(3);
	else
		fail(3);
	if (printf("%+-015x\n", 4422) == ft_printf("%+-015x\n", 4422))
		pass(4);
	else
		fail(4);
	if (printf("[%+.s]\n", "prout") == ft_printf("[%+.s]\n", "prout"))
		pass(5);
	else
		fail(5);
	if (printf("%hhd\n", 'c') == ft_printf("%hhd\n", 'c'))
		pass(6);
	else
		fail(6);
	if (printf("%+014p\n", 'c') == ft_printf("%+014p\n", 'c'))
		pass(7);
	else
		fail(7);
	if (printf("%+-25lld\n", LLONG_MAX + 1) == ft_printf("%+-25lld\n", LLONG_MAX + 1))
		pass(8);
	else
		fail(8);
	if (printf("%+   .d\n", 23452) == ft_printf("%+   .d\n", 23452))
		pass(9);
	else
		fail(9);
	if (printf("%  099d\n", 666) == ft_printf("%  099d\n", 666))
		pass(10);
	else
		fail(10);
	if (printf("%+-300d\n", 36400) == ft_printf("%+-300d\n", 36400))
		pass(11);
	else
		fail(11);
	if (printf("%     105d\n", 42689) == ft_printf("%     105d\n", 42689))
		pass(12);
	else
		fail(12);
	if (printf("%   16u\n", 489) == ft_printf("%   16u\n", 489))
		pass(13);
	else
		fail(13);
	if (printf("% +  146X\n", 739) == ft_printf("% +  146X\n", 739))
		pass(14);
	else
		fail(14);
	if (printf("%# 36X\n", 239) == ft_printf("%# 36X\n", 239))
		pass(15);
	else
		fail(15);
	if (printf("%#031.x\n", 29879) == ft_printf("%#031.x\n", 29879))
		pass(16);
	else
		fail(16);
	if (printf("%54.-14x\n", 5987) == ft_printf("%54.-14x\n", 5987))
		pass(17);
	else
		fail(17);
	if (printf("%#o\n", 7777) == ft_printf("%#o\n", 7777))
		pass(18);
	else
		fail(18);
	if (printf("%#067o\n", UINT_MAX) == ft_printf("%#067o\n", UINT_MAX))
		pass(19);
	else
		fail(19);
}

int			main(void)
{
	printf("\tWITHOUT FLAGS : \n");
	test_without_flags();
	printf("\tPERCENT : \n");
	test_percent();
	printf("\tc CONVERSION : \n");
	test_c();
	printf("\ts CONVERSION : \n");
	test_s();
	printf("\tint CONVERSIONS : \n");
	test_int();
	printf("\thex CONVERSIONS : \n");
	test_hex();
	printf("\tZERO FLAG : \n");
	test_zero();
	printf("\tOTHER TESTS : \n");
	test_other();
	printf("\tTEST POINT ZERO\n");
	test_zerpot();
	printf("\tHARD TESTS : \n");
	test_hard();
	printf("\tTEST BONUS : \n");
	test_bonus();

//	ft_printf("%d\n", INT_MIN);
	return (0);
}
