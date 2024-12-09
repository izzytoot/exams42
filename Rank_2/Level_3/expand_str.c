/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:47:49 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 13:56:13 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == 9)
		return (1);
	return (0);
}

int	main (int ac, char **av)
{
	int	i = 0;
	int	space = 0;
	
	if (ac == 2)
	{
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (is_space(av[1][i]))
				space = 1;
			if (!(is_space(av[1][i])))
			{
				if (space)
					write (1, "   ", 3);
			space = 0;
			write (1, &av[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
