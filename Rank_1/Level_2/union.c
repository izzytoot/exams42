/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:23:56 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 18:46:41 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	check_repeat(char *str, int index, char c)
{
	int	i = 0;
	
	while (str[i] < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	char *new_str;
	int	i = 0;

	if (ac == 3)
	{
		new_str = ft_strcat(av[1], av[2]);
		while (new_str[i])
		{
			if (check_repeat(new_str, i, new_str[i] == 1))
				write (1, &new_str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
