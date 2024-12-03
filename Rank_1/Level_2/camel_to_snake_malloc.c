/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:36:55 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 12:26:28 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	count_sep(char *str)
{
	int	i = 0;
	int	c = 0;
	
	while (str[i])
	{
		if (str[i] == '\0')
			return (0);
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = c + 1;
		i++;
	}
	return (c);
}

int	main(int ac, char **av)
{
	int	sep;
	int	len;
	int	i = 0;
	char	*new_string;
	
	if (ac == 2)
	{
		sep = count_sep(av[1]);
		len = ft_strlen (av[1]);
		new_string = (char *)malloc(sizeof(char) * (len + sep) + 1);
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				new_string[i] = av[1][i];
				write (1, &new_string[i], 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				write (1, "_", 1);
				av[1][i] = av[1][i] + 32;
				new_string[i] = av[1][i];
				write (1, &new_string[i], 1);
			}
			i++;
		}
		free (new_string);
	}
	write (1, "\n", 1);
	return (0);
}
