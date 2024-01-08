/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 09:10:14 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/23 09:10:16 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "abc";
	char dest[6] = "lol";
	char *result;
	char *sup;
	
	result = ft_strcat(dest, src);
	sup = strcat(dest, src);
	printf("resultado: %s;\nsuposto: %s;", result, sup);
}*/
