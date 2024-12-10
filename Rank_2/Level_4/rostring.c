/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:37:27 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 14:14:07 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	word_start;
	int	word_end;
	
	if (ac > 1)
	{
		i = 0;
		while (ft_isspace(av[1][i]))
			i++;
		word_start = i;
		while(av[1][i] && !ft_isspace(av[1][i]))
			i++;
		word_end = i;
		while(ft_isspace(av[1][i]))
			i++;
		while (av[1][i])
		{
			if(!ft_isspace(av[1][i]) && ft_isspace(av[1][i - 1]))
			{
				while(!ft_isspace(av[1][i]))
				{	
					write(1, &av[1][i], 1);
					i++;
				}
				write (1, " ", 1);
			}
			i++;
		}
		while (word_start < word_end)
		{
			write(1, &av[1][word_start], 1);
			word_start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
