#include <unistd.h>
#include <stdio.h>
#include <string.h>
/*
      bonjour
       bonjo
*/
typedef struct	s_var
{
	int right;
	int prec;
	int width;
	int zero_space;
}				t_var;

t_var			ft(t_var var)
{
	var.right = 1;
	return (var);
}

int			tf(t_var var)
{
	var.prec = 2;
	return (var.prec);
}

int				main(void)
{
	int i = 12;

	printf("\n%d", printf("%8.7s", "bonjour"));
}
