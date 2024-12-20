/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:26:02 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 13:43:29 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;
	
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "Hfellelofsfdsf";
	char	*s2 = "sf";
	
	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s\n", strpbrk(s1, s2));
	return(0);
}
*/
