/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:16:49 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/26 14:16:52 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}