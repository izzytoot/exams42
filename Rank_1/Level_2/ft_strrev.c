/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:42:23 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 15:09:40 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	char	temp;
	int	i = 0;
	int	len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	len--;
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strrev(av[1]));
	return (0);
}

int	main(void)
{
	char	str[100] = "bino santi";
	char	*rev = NULL;

	rev = ft_strrev(str);
	printf("%s\n", rev);
	return (0);
}
*/