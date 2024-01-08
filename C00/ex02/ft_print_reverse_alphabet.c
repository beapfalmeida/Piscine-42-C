/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:22:26 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/16 17:08:08 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	int		number;

	number = 1;
	letter = 'z';
	while (number <= 26)
	{
		number += 1;
		write(1, &letter, 1);
		letter--;
	}
}