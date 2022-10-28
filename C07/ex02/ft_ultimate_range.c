/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:49:29 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/09 15:17:50 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	i = 0;
	*range = (int *)malloc(size * sizeof(int));
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}
