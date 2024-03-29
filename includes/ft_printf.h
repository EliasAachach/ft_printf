/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 01:27:46 by elaachac          #+#    #+#             */
/*   Updated: 2021/01/07 03:03:11 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0
# define WIDTH 0
# define ZERO_SPACE 1

typedef struct	s_var
{
	int		right;
	int		prec;
	int		width;
	int		zero_space;
	int		total_len;
	int		index;
	int		conv;
	int		isprec;
	int		diux;
	int		errorprec;
	int		iszero;
	int		len;
	int		is_nbr_neg;
	int		is_prec_neg;
	char	*identifier;
}				t_var;

t_var			init(t_var var);
t_var			parsing(const	char	*str, t_var	var, va_list arg);
t_var			check_convert(const	char	*str, t_var var, va_list arg);
t_var			check_flags(const	char	*str, t_var var);
t_var			check_precision(const char	*str, t_var var, va_list arg);
t_var			check_width(const	char	*str, t_var var, va_list arg);
t_var			wich_convert(const	char	*str, t_var var);
char			*ft_putmem(void	*addr, int isprec);
char			*ft_itoa(int nbr);
char			*ft_itoa_ui(unsigned int nbr);
char			*ft_convert_hexa(unsigned int nbr, int maj);
int				ft_printf(const	char	*str, ...);
int				ft_nbrlen_hexa(unsigned int nbr);
int				ft_putchar(char	c);
int				ft_putstr(char	*str);
int				ft_atoi(const	char	*str);
int				ft_display(char	*str, t_var var);
int				ft_display_diux(char	*str, t_var var);
int				ft_strlen(char	*str);
int				ft_putnbr(int nbr);
int				ft_putnbr_ui(unsigned int nbr);
int				setup_funct(char *str, t_var *var);
int				setup2_funct(t_var *var, char *str);
void			end_display(t_var *var, int *i, int *y, int *j);
void			convert_mem(unsigned long long int nbr, char *nbr_final, \
					unsigned long long int final_len);
#endif
