#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

#define CONVERSION "cspdiuxX%"

typedef struct 	s_ptf
{
	int i;
	int j;
	int k;
	int count_arg;
	int total_len;
}				t_ptf;
int		ft_convert_hexa(unsigned int nbr, int maj);
int		ft_nbrlen_hexa(unsigned int nbr);
int		ft_putchar(char c);
int		ft_putmem(void *addr);
void	ft_putnbr(int nbr, int *len);
void	ft_putnbr_ui(unsigned int nbr, int *len);
int		ft_putstr(char *str);

#endif
