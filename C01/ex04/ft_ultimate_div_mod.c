/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:13:33 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 12:13:39 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *a / *b;
	*b = buffer % *b;
}
/*int main(void)
{
	int a = 23;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %i", a);
	printf("%s", "\n");
	printf("b: %i", b);
}*/
