/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:01:52 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/20 11:06:31 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			result = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}

/*int main(void) {
    char str1[] = "a12a5";
    char str2[] = "aBcD";
    char str3[] = "";

    printf("%s: %d\n", str1, ft_str_is_alpha(str1));
    printf("%s: %d\n", str2, ft_str_is_alpha(str2));
    printf("%s: %d\n", str3, ft_str_is_alpha(str3));

    return 0;
}*/
