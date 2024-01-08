/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:09:46 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 12:09:49 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*int main(void)
{
	int a= 1;
	int b=2;
	ft_swap(&a, &b);
	printf("a: %i", a);
	printf("%s", "\n");
	printf("b: %i", b);
}*/
