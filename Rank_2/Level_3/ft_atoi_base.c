/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:40:26 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/10 15:38:13 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_isupper(int c)
{
	if (c >= 'A' && c <= 'F')
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if (c >= 'a' && c <= 'f')
		return (1);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int r = 0;
	int	digit = 0;
	int sym = 1;
	
	if(str_base < 2 || str_base > 16)
		return(0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sym = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if(ft_isdigit(str[i]))
			digit = str[i] - '0';
		else if (ft_islower(str[i]))
			digit = str[i] - 'a' + 10;
		if (ft_isupper(str[i]))
			digit = str[i] - 'A' + 10;
		else
			break ;
		if (digit >= str_base)
			break ;
		r = r * str_base + digit;
		i++;
	}
	return (r * sym);	
}

int main(void)
{
    const char *str = "abc";
    int base = 5;
    int result = ft_atoi_base(str, base);
    printf("The result is: %i\n", result);
    return 0;
}
