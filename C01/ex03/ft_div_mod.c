/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:12:01 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/19 12:12:09 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a = 23;
	int b = 10;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %i", div);
	printf("%s", "\n");
	printf("mod = %i", mod);
}*/
