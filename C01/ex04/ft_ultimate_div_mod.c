/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:51:06 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/07/24 20:43:19 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	if (*b != 0)
	{
		division = *a / *b;
		modulo = *a % *b;
		*a = division;
		*b = modulo;
	}
}
