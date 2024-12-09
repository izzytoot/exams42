/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:59:37 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 14:28:43 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int	get_digit(char c, int  str_base)
{
	int	max_digit;
	
	if (str_base <= 10)
		max_digit =  str_base - 1 + '0';
	else
		max_digit = str_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int sym = 1;
	int	r = 0;
	int	digit = 0;
	
	if (str == 0 || str_base < 2 || str_base > 16)
		return (0);
	if (str[i] == '-')
	{
		sym = -1;
		i++;
	}
	while (str[i])
	{
		digit = get_digit(ft_tolower(str[i]), str_base);
		if (digit == -1)
			break;
		r = r * str_base + digit;
		i++;
	}
	return (r * sym);
}
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_atoi_base("-5", 10));
}