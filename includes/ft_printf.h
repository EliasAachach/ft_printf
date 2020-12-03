#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define WIDTH 0
#define ZERO_SPACE 1

typedef struct s_var
{
	int	right;
	int	prec;
	int	width;
	int	zero_space;
	int	total_len;
	int	index;
	int	conv;
}				t_var;

t_var	parsing(const	char	*str, t_var	var, va_list arg);
t_var	check_convert(const	char	*str, t_var
var, va_list arg);
t_var	check_flags(const	char	*str,
t_var	var);
t_var	check_precision(const char	*str,
t_var	var, va_list arg);
t_var	check_width(const	char	*str,
t_var	var, va_list arg);
t_var	wich_convert(const	char	*str, t_var var);
char	*ft_putmem(void	*addr);
char	*ft_itoa(int nbr);
int		ft_printf(const	char	*str,
...);
int		ft_convert_hexa(unsigned int nbr, int maj);
int		ft_nbrlen_hexa(unsigned int nbr);
int		ft_putchar(char	c);
int		ft_putstr(char	*str);
int		ft_atoi(const	char	*str);
int		ft_display(char	*str, t_var var);
int		ft_strlen(char	*str);
int		ft_putnbr(int nbr);
int		ft_putnbr_ui(unsigned int nbr);

#endif
