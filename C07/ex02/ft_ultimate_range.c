/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:23:09 by bpaiva-f          #+#    #+#             */
/*   Updated: 2024/01/02 22:23:11 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	buffer = malloc((max - min) * sizeof(int));
	if (!buffer)
		return (-1);
	while (min < max)
	{
		buffer[i] = min;
		min ++;
		i++;
	}
	*range = buffer;
	return (i);
}
