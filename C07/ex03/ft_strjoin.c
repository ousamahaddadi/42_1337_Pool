/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:25:44 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/08/07 22:47:19 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
		len += ft_strlen(strs[i++]);
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		len;
	int		i;

	len = ft_total_len(size, strs, sep);
	string = (char *) malloc ((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[0] = '\0';
	ft_strcpy(string, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcpy(string, sep);
		ft_strcpy(string, strs[i++]);
	}
	return (string);
}
