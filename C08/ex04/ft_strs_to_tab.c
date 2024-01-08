/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:19:02 by bpaiva-f          #+#    #+#             */
/*   Updated: 2024/01/03 20:19:04 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	new = malloc(src_len);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	if (!array)
		return (0);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}

/*int main (int  argc,char *argv[])
{
    int i;
    t_stock_str *array;
    i = 0;
    array = ft_strs_to_tab(argc, argv);
    while (i < argc)
    {
	    printf("Size: %d\n", array[i].size);
	    printf("Str: %s\n", array[i].str);
	    printf("Copy: %s\n", array[i].copy);
	    printf("\n");
	    i++;
    }
}*/
