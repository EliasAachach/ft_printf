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
int ft_printf(char *str, ...)
{
	int	i = 0;
	va_list puet;
	char *string;
	va_start(puet, str);
	while (str[i])
	{
		if (str[i] != '%')
			printf("%c", str[i]);
		else
		{
			string = va_arg(puet, char *);
			printf("%s", string);
			i++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("Salut %s comment %s", "Elias", "ca va");
	return(0);
}
