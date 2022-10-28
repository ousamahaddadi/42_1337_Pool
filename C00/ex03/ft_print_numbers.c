/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:42:10 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/07/22 12:08:21 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	ft_putchar(char c)

{
	write(1, &c, 1);
	return (c);
}

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}
