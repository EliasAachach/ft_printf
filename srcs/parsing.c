#include "ft_printf.h"

t_var	parsing(const char *str, t_var var, va_list arg)
{
	var = check_flags(str, var);
	var = check_width(str, var, arg);
	var = check_precision(str, var, arg);
	var = wich_convert(str, var);
	var = check_convert(str, var, arg);
	return (var);
}

/*
char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	if (!(s2 = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)))))
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
*/