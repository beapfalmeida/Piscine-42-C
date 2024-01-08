/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:01:52 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/20 11:06:31 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			result = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
