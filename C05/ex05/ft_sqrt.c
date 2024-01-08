/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:59:50 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/28 11:59:52 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbl;

	nbl = nb;
	if (nbl == 1)
		return (1);
	i = 2;
	while (i * i <= nbl)
	{
		if (i * i == nbl)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	n = -4562894;
	printf("Square root of %i is %i", n, ft_sqrt(n));
}*/
