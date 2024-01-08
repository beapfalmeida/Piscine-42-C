/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:55:37 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/16 16:56:12 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter; 
	int		number;

	number = 1; 
	letter = 'a';
	while (number <= 26)
	{
		number += 1;
		write(1, &letter, 1);
		letter++;
	}
}
