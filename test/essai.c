/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 14:18:18 by elaachac          #+#    #+#             */
/*   Updated: 2020/03/12 20:36:45 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int 	ft_printf(const char *str, ...)
{
	int	i = 0;
	va_list puet;
	char *string;
	va_start(puet, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
		{
			string = va_arg(puet, char *);
			ft_putstr(string);
			i++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("Salut %s comment %s", "mon pote", "ca va");
	return(0);
}
