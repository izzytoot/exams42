/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:40:26 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/04 15:58:44 by icunha-t         ###   ########.fr       */
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
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int r = 0;
	int sym = 1;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[0] == '-')
		sym = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		r = r * str_base;
		if(ft_isdigit(str[i]))
			r = r + (str[i] - 48);
		if (ft_islower(str[i]))
			r = r + (str[i] - 87);
		if (ft_isupper(str[i]))16
			r = r + (str[i] - 55);
		i++;
	}
	return (r * sym);	
}

int main(void)
{
    const char *str = "54";
    int base = 4;
    int result = ft_atoi_base(str, base);
    printf("The result is: %i\n", result);
    return 0;
}