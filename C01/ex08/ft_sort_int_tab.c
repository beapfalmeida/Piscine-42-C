/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:23:57 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 16:24:00 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;
	int	k;

	i = 0;
	k = 1;
	while (i < size - 1)
	{
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				buffer = tab[i];
				tab[i] = tab[k];
				tab[k] = buffer;
			}
			k++;
		}
		i++;
		k = i + 1;
	}
}

/*int	main(void)
{
	int	tab[] = {6, 5, 9, 1, 7};
	
	ft_sort_int_tab(tab, 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}*/
