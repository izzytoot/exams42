/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:41:56 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/04 14:41:58 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	*new_array;
	int	size;
	int	i = 0;
	
	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	new_array = (int *)malloc(sizeof(int) * size);
	if(!new_array)
		return (0);
	if (start <= end)
	{
		while(end >= start)
		{
			new_array[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while(end <= start)
		{
			new_array[i] = end;
			end++;
			i++;
		}
	}
	return(new_array);
}
/*
int main(void)
{
	int	i = 0;
	int	start = 0;
	int	end = -3;
	int size;
	int	*result = ft_rrange(start, end);
	
	if (start <= end)
		size = end - start + 1;
	if (start > end)
		size = start - end + 1;
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
