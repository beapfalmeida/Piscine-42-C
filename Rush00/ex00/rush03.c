/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-f <bpaiva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:46:10 by bpaiva-f          #+#    #+#             */
/*   Updated: 2023/12/17 11:46:12 by bpaiva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	first_line(int x, int y);
void	middle_lines(int x, int y, int i, int j);
void	last_line(int x, int y, int i, int j);
void	ft_putchar(char value);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x, y);
	}
	return ;
}

void	first_line(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	ft_putchar('A');
	i++;
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (i == x)
	{
		ft_putchar('C');
		ft_putchar('\n');
		i = 1;
		j++;
	}
	middle_lines(x, y, i, j);
}

void	middle_lines(int x, int y, int i, int j)
{
	while (j < y)
	{
		ft_putchar('B');
		i++;
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		i = 1;
		j++;
	}
	last_line(x, y, i, j);
}

void	last_line(int x, int y, int i, int j)
{
	ft_putchar('A');
	i++;
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
}
