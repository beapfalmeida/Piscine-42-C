/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:37:52 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 19:37:59 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
/*int main(void) {
    char str1[] = "123aB45";
    char str2[] = "aBcd";
    char str3[] = "";
    char str4[] = "abcd";

    printf("%s: %d\n", str1, ft_str_is_lowercase(str1));
    printf("%s: %d\n", str2, ft_str_is_lowercase(str2));
    printf("%s: %d\n", str3, ft_str_is_lowercase(str3));
    printf("%s: %d\n", str4, ft_str_is_lowercase(str4));

    return 0;
}*/
