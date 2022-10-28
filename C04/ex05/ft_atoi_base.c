/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ousamasaad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:53:39 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/08 20:06:55 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	len;

	len = ft_len(base);
	i = 0;
	if (*base == '\0' || len == 0)
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

int	ft_inter(char c, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[j])
	{
		if (base[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int	ft_put(char str, int res, int len)
{
	if (str >= '0' && str <= '9')
		res = res * len + (str - '0');
	else if ((str >= 'A' && str <= 'F'))
		res = res * len + (str - 'A' + 10);
	else if ((str >= 'a' && str <= 'f'))
		res = res * len + (str - 'a' + 10);
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	len;

	i = 0;
	sign = 1;
	res = 0;
	len = ft_len(base);
	if (checkerror(base) == 0)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
		while (str[i] && ft_inter(str[i], base))
		{
			res = ft_put(str[i++], res, len);
		}
	}
	return (sign * res);
}
