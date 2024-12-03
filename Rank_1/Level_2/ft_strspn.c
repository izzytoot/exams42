/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:09:57 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 15:41:01 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	size_t	count = 0;
	int	j = 0;

	if (!s)
		return (0);
	 while (s[i])
    {
        j = 0;
		while (accept[j] && s[i] != accept[j])
            j++;
        if (accept[j] == '\0')
            return (count);
        count++;
        i++;
    }
	return (count);
}
/*
int	main(void)
{
	printf("%lu\n", ft_strspn("holaa", "ola"));
	printf("%lu\n", strspn("holaa", "ola"));
	return (0);
}
*/