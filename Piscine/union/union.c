/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:58:18 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/26 11:58:19 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
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

int	ft_check(char *str, int index, char c)
{
	int	l;
	
	l = 0;
	while (l < index)
	{
		if (str[l] == c)
		{
			return (0);
		}
		l++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	char	*str;
	
	if (argc == 3)
	{
		str = ft_strcat(argv[1], argv[2]);
		i = 0;
		while (str[i])
		{
			if (ft_check(str, i, str[i]) == 1)
			{
				write (1, &str[i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
