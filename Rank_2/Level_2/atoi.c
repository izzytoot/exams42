/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:30:01 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/03 14:15:16 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	r = 0;
	int	sym = 1;
	
	while (str[i] == 32 || (str[i] >=9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sym = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * sym);
}
/*
int	main(void)
{
	char	*str = "   -12658lsk";
	printf("%d\n", ft_atoi(str));
	return (0);
}
*/