/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:59:22 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 14:14:54 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;
	int	c = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (c);
			j++;
		}
		i++;
		c++;
	}
	return (c);
}
/*
int	main(void)
{
	char	*s = "adeus";
	char	*r = "us";
	
	printf("%lu\n", ft_strcspn(s, r));
	printf("%lu\n", strcspn(s, r));

	return (0);
}
*/