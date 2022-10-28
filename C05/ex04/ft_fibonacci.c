/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:26:03 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/03 10:10:41 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index >= 2)
	{
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	}
	else if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (res);
}
