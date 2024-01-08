/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:22:23 by bpaiva-f          #+#    #+#             */
/*   Updated: 2024/01/02 22:22:25 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (max <= min)
	{
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min ++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 3;
	max = 10;
	array = ft_range(min, max);
	printf("Whith max as %i and min as %i, my array is:\n", max, min);
	for (i = 0; i < max - min; i++) 
		printf("array[%i] = %i\n", i, array[i]);
}*/
