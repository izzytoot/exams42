/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:44:43 by icunha-t          #+#    #+#             */
/*   Updated: 2024/09/26 09:44:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, int index, char c)
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
	int	j;
	
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check(argv[1], i, argv[1][i]) == 1)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write (1, &argv[1][i], 1);
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
