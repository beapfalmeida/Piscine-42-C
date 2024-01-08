/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:58:59 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/23 13:59:01 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_min(void)
{
	write(1, "-", 1);
	write(1, "2", 1);
	write(1, "1", 1);
	write(1, "4", 1);
	write(1, "7", 1);
	write(1, "4", 1);
	write(1, "8", 1);
	write(1, "3", 1);
	write(1, "6", 1);
	write(1, "4", 1);
	write(1, "8", 1);
}

void	ft_putnbr(int nb)
{
	int count;
	count = 0;
	if (nb == -2147483648)
	{
		ft_print_min();
	}
	else 
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb < 10)
		{
			ft_putchar(nb + 48);
			count++;
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	printf("count %i\n", count);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(1567);
	ft_putchar('\n');
	ft_putnbr(-1438);
}
