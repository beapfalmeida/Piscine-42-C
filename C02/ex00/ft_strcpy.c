/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:55:20 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 18:55:23 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	source[] = "Hello";
	char	dest[5];	
	ft_strcpy(dest, source);
	printf("Destination: %c", dest[0]);
	printf("%c", dest[1]);
	printf("%c", dest[2]);
	printf("%c", dest[3]);
	printf("%c", dest[4]);
}*/
