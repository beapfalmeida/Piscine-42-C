/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fubonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:57:41 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/28 11:57:43 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_fibonacci(int index)
{
	long	result;

	if (index == 1 || index == 2)
		return (1);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else
	{
		result = ft_fibonacci(index -1) + ft_fibonacci(index -2);
		return (result);
	}
}
