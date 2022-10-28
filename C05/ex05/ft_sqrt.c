/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:12:39 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/07 16:30:31 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		while (sqrt < 46341)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			if (sqrt * sqrt > nb)
				return (0);
			sqrt++;
		}
	}
	return (0);
}
