#include "ft_printf.h"

int ft_nbrlen_mem(unsigned long long int nbr)
{
	int len;
	unsigned long long int n;

	len = 0;
	n = nbr;
	if (nbr == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}

void	convert_mem(unsigned long long int nbr, char *nbr_final,\
			unsigned long long int final_len)
{
	unsigned long long int i;
	char *base;

	i = 0;
	base = "0123456789abcdef";
	nbr_final[final_len] = base[nbr];
}

char	*ft_mem_hexa(unsigned long long int nbr)
{
	unsigned long long int	q;
	unsigned long long int	r;
	unsigned long long int	tmp;
	unsigned long long int	final_len;
	char			*nbr_final;

	q = 0;
	r = 0;
	tmp = 0;
	final_len = ft_nbrlen_mem(nbr);
	if (!(nbr_final = (char *)malloc(sizeof(char) * (final_len + 1))))
		return (NULL);
	nbr_final[final_len] = '\0';
	final_len--;
	if (nbr < 16)
	{
		convert_mem(nbr, nbr_final, final_len);
		return (nbr_final);
	}
	else
	{
		q = nbr / 16;
		r = nbr % 16;
		convert_mem(r, nbr_final, final_len);
		final_len--;
		while (q >= 16)
		{
			tmp = q;
			q = tmp / 16;
			r = tmp % 16;
			convert_mem(r, nbr_final, final_len);
			final_len--;
		}
		convert_mem(q, nbr_final, final_len);
		final_len--;
	}
	return (nbr_final);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1 != '\0')
		dest[i++] = *s1++;
	while (*s2 != '\0')
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_putmem(void *addr, int isprec)
{
    char *str;
    char *ret;

	
	if (addr == NULL && isprec == TRUE)
	{
		if (!(ret = ft_strjoin("0x", "")))
			return (NULL);
			return (ret);
	}
    str = ft_mem_hexa((unsigned long long int)addr);
    if (!(ret = ft_strjoin("0x", str)))
        return (NULL);
	return (ret);
}