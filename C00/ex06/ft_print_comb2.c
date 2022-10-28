/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:42:40 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/07/22 12:10:55 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

void	ft_putint(int a)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putint(a);
			ft_putchar(' ');
			ft_putint(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
