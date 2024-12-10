/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:41:12 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 15:21:00 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if(c == ' ' || c == 9 || c == '\0')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	word_start;
	int	word_end;
	int	i = 0;
	int	temp;
	
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (ft_isspace(av[1][i]))
				i--;
			word_end = i;
			while(!ft_isspace(av[1][i]))
				i--;
			temp = i;
			word_start = i++;
			while (word_start <= word_end)
			{
				if (!(ft_isspace(av[1][word_start])))
					write (1, &av[1][word_start], 1);
				word_start++;
			}
			if (i == 0)
				break;
			write (1, " ", 1);
			i = temp;
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}