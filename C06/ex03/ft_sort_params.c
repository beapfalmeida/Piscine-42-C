/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:11:15 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/28 12:11:17 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_write(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], length(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*buffer;

	buffer = *s1;
	*s1 = *s2;
	*s2 = buffer;
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;
	int	l;

	i = 1;
	l = 0;
	while (i < argc - 1)
	{
		k = i + 1;
		while (k < argc)
		{
			while (argv[i][l] == argv[k][l])
				l++;
			if (argv[i][l] > argv[k][l])
				ft_swap(&argv[i], &argv[k]);
			l = 0;
			k++;
		}
		i++;
	}
	ft_write(argc, argv);
}
