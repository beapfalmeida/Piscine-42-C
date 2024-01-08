int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	while (str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

int	check_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 43 | str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;  
	long	nbl;

	base_len = check_base(base);
	if (!base_len)
		return ;
	if (nbr < 0)
	{
		nbl = nbr * -1;
		ft_putchar('-');
	}
	else
		nbl = nbr;
	if (nbl >= base_len)
		ft_putnbr_base(nbl / base_len, base);
	ft_putchar(base[nbl % base_len]);
	
}

int symbol_check(char c, char symbols[])
{
	int	i;

	i = 0;
    while (symbols[i] != '\0')
    {
        if (c == symbols[i])
        {
            return 1;
	}
        i++;
    }
    return 0;
}
int     ft_atoi_base(char *str, char *base)
{
        int	nb;
	int	base_len;

	base_len = check_base(base);
	nb = ft_atoi(str);
	if (!base_len)
                return ;
        if (nbr < 0)
        {
                nbl = nbr * -1;
                ft_putchar('-');
        }
        else
                nbl = nb;
}

int	main(int argc, char **argv)
{
	char	*base;
	char	*nbr;
	int	result;

	nbr = argv[1];
	base = argv[2];

	result = ft_atoi_base(nbr, base);
}
