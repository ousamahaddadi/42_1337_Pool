/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:31:48 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/06 11:43:25 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	size;

	size = max - min;
	i = 0;
	array = (int *) malloc((size) * sizeof(int));
	if (!array)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < size)
		*(array + i++) = min++;
	return (array);
}
