/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:53:10 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/26 13:53:13 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}