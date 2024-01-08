/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:03:42 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/26 14:03:45 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	factorial = nb;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorial *= (nb - 1);
		nb--;
	}
	return (factorial);
}

/*int	main(void)
{
	int nb = -1;
	printf("%i! = %i", nb, ft_iterative_factorial(nb));
}*/
