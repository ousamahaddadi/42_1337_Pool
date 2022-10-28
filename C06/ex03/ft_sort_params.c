/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:39:06 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/02 15:46:38 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	ft_cmp(char *s1, char *s2)
{	
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 1;
	if (argc > 1)
	{
		while (k < argc - 1)
		{
			j = 1;
			while (j < argc - 1)
			{
				if (ft_cmp(argv[j], argv[j + 1]) > 0)
					ft_swap(&argv[j], &argv[j + 1]);
				j++;
			}
			k++;
		}
		i = 1;
		while (i < argc)
			ft_putstr(argv[i++]);
	}
	return (0);
}
