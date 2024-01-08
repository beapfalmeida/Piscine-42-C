/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:22:54 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/20 14:23:01 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	i;
	int	j;
	unsigned int n = 7;
	char	s1[] = "Maracuja";
	char	s2[] = "Maracuja";
	i = ft_strncmp(s1, s2, n);
	j = strncmp(s1, s2, n);
	printf("%i, %i", i, j);
	return (0);
}*/
