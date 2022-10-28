/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:40:13 by amtouham          #+#    #+#             */
/*   Updated: 2022/07/25 13:40:48 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);	

void	printcolumnsfirst(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		j++;
	}
}

void	printcolumnslast(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar('C');
		else if (j == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		j++;
	}
}

void	printrows(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	ft_putchar('\n');
	while (i <= y - 2)
	{
		j = 1;
		while (j <= x)
		{
			if (j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	if (y == 1)
	{
		printcolumnsfirst(x);
	}
	else if (y == 2)
	{
		printcolumnsfirst(x);
		ft_putchar('\n');
		printcolumnslast(x);
	}
	else
	{
		printcolumnsfirst(x);
		printrows(x, y);
		printcolumnslast(x);
	}
}
