/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:17:23 by root              #+#    #+#             */
/*   Updated: 2024/12/02 12:20:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	
	while(str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "How many chars?";
	
	printf ("%d", ft_strlen(str));
	return (0);
}
*/