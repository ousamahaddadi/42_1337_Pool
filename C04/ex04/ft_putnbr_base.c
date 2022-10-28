/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:45:08 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/08 11:51:04 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (*base == '\0' || ft_len(base) == 0)
		return (1);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	long	n;

	n = nbr;
	baselen = ft_len(base);
	if (checkerror(base) == 0)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= baselen)
		{
			ft_putnbr_base(n / baselen, base);
			ft_putnbr_base(n % baselen, base);
		}
		if (n < baselen)
			ft_putchar(base[n]);
	}
}
