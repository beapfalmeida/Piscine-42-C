/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:41:43 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/23 10:41:45 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	length_dest;
	unsigned int	length_src;

	k = 0;
	length_dest = ft_str_len(dest);
	length_src = ft_str_len(src);
	if (size == 0 || size <= length_dest)
		return (length_src + size);
	while (src[k] != '\0' && k < size - length_dest - 1)
	{
		dest[length_dest + k] = src[k];
		k++;
	}
	dest[length_dest + k] = '\0';
	return (length_dest + length_src);
}