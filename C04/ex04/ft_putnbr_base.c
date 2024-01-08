/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:12:55 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/28 11:12:57 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 43 || str[i] == 45)
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
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
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

/*int	main(void)
{
	printf("Base: %s\n", "0123456789");
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	printf("Base: %s\n", "01");
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	printf("Base: %s\n", "poneyvif");
	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');
	printf("Base: %s\n", "0123456789ABCDEF");
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
}*/
