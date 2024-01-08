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