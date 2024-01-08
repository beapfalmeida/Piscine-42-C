/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:35:46 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 19:35:51 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
/*int main(void) {
    char str1[] = "12345";
    char str2[] = "aB12";
    char str3[] = "";

    printf("%s: %d\n", str1, ft_str_is_numeric(str1));
    printf("%s: %d\n", str2, ft_str_is_numeric(str2));
    printf("%s: %d\n", str3, ft_str_is_numeric(str3));

    return 0;
}*/
