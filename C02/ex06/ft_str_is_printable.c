/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:40:47 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 19:40:51 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
/*int main(void) {
    char str1[] = "123aB\n";
    char str2[] = "aBcd";
    char str3[] = "";
    char str4[] = "abcd";

    printf("%s: %d\n", str1, ft_str_is_printable(str1));
    printf("%s: %d\n", str2, ft_str_is_printable(str2));
    printf("%s: %d\n", str3, ft_str_is_printable(str3));
    printf("%s: %d\n", str4, ft_str_is_printable(str4));

    return 0;
}*/
