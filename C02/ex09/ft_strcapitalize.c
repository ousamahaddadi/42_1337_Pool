/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:37:47 by ohaddadi          #+#    #+#             */
/*   Updated: 2022/07/26 22:13:40 by ohaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upcase;

	str = ft_strlowcase(str);
	i = 0;
	upcase = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			if (upcase == 1)
				str[i] -= 32;
			upcase = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			upcase = 0;
		else
			upcase = 1;
		i++;
	}
	return (str);
}
