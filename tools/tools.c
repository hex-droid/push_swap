# include "tools.h"

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

	if (!(str = (char *)malloc(sizeof(char) * 2)))
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
	int n;
	int ret;

	n = 0;
	ret = ext_ft_atoi(str, &n);
	(void)n;
	return (ret);
}

int		ext_ft_atoi(const char *str, int *x)
{
	int i;
	long n;
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
	{	
		n = n * 10 + (str[i++] - '0');
		if (n > INT_MAX || n < -INT_MIN)
			*x = 1;
	}
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
		if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
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
		free((void *)s1);
		free((void *)s2);
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
	if (!(ptr = (char*)malloc(sizeof(char) * i + 1)))
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

void		ft_putstr(const char *str)
{
	ft_putstr_fd(str, 1);
}

void		ft_putstr_fd(const char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}	
}

int     string_to_int (char* str)
{
    int ok;
    int n = safe_string_to_int(str, &ok);
    if (ok == 0)
        printf ("string_to_int : chaine de character %s invalide \n", str);
    return (n);
}

int		safe_string_to_int (char* str, int* ok)
{
    int i;
    int n = 0;
    *ok = 1;

    if (str[0] == '-')
        return (- safe_string_to_int (str + 1, ok));
    if (!(*str))
    {   
        *ok = 0;
        return (0);
    }
    for (i = 0; (str[i] != '\0'); i++)
    {
        if ((str[i] < '0') || (str[i] > '9'))
            *ok = 0;
        n *= 10;
        n += (str[i] - 48);
    }
    return (n);
}

void		swap_int(int* m, int* n)
{
	int tmp;

	tmp = *m;
	*m = *n;
	*n = tmp;
}

void		swap_char(char* m, char* n)
{
    char tmp;

    tmp = *m;
    *m = *n;
    *n = tmp;  
}