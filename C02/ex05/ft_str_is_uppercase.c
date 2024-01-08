/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:39:26 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 19:39:30 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
    char str4[] = "ABCD";

    printf("%s: %d\n", str1, ft_str_is_uppercase(str1));
    printf("%s: %d\n", str2, ft_str_is_uppercase(str2));
    printf("%s: %d\n", str3, ft_str_is_uppercase(str3));
    printf("%s: %d\n", str4, ft_str_is_uppercase(str4));

    return 0;
}*/
