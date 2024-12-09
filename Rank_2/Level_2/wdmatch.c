/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:45:03 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/04 11:26:09 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, int index, char c)
{
	int	i = index;
	
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	index_j(char *str, int index, char c)
{
	int	i = index;
	
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main (int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	char str[100];
	int	n = 0;
	
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check(av[2], j, av[1][i]))
			{
				str[n] = av[1][i];
				n++;
			}
			j = index_j(av[2], j, av[1][i]);
			j++;
			i++;
		}
		str[n] = '\0';
		n = 0;
		if (ft_strcmp(av[1], str) == 0)
		{
			while (str[n])
			{
				write (1, &str[n], 1);
				n++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}