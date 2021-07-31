#include "../inc/push_swap.h"

size_t		ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;

	if (!(str = (char *)tools_malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int i;
	int n;
	int neg;

	i = 0;
	n = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	return (n * neg);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (s1 && s2)
	{
		if (!(str = tools_malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (0);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[a])
		{
			str[i + a] = s2[a];
			a++;
		}
		str[i + a] = '\0';
		tools_free((void *)s1, ft_strlen(s1) * sizeof(char));
		tools_free((void *)s2, ft_strlen(s2) * sizeof(char));
		return (str);
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (!(ptr = (char*)tools_malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}