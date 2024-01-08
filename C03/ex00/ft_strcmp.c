/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:13:38 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/20 14:13:42 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int	i;
	int	j;
	char	s1[] = "Hey";
	char	s2[] = "Banana";
	i = ft_strcmp(s1, s2);
	j = strcmp(s1, s2);
	printf("%i, %i", i, j);
	return (0);
}*/
