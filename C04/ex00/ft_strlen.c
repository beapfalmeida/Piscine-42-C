/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:29:52 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/28 11:29:56 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Length of %s is %d", argv[1], ft_strlen(argv[1]));
	else
		printf("Please provide just one word!");
}*/
