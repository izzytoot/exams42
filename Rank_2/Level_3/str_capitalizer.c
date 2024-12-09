/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:38:17 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 17:48:58 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == 9 || str[i - 1] == '\0'))
			str[i] = str[i] - 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main (int ac, char **av)
{
	int	i = 1;
	
	if (ac > 1)
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	if (ac == 1)
		write (1, "\n", 1);
	return (0);
}
