/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:31 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 16:19:24 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_repeat(char *str, int index, char c)
{
	int	i = 0;
	
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;
	
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check_repeat(av[1], i, av[1][i]) == 1)
			{
				j = 0;
				while(av[2][j])
				{
					if (av[1][i] == av[2][j])
					{
						write (1, &av[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}