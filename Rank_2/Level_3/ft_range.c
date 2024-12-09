/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:39:24 by icunha-t          #+#    #+#             */
/*   Updated: 2024/12/09 15:12:06 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	size;
	int i = 0;
	int	*result;
	
	if (start > end)
		size = (start - end) + 1;
	if (start == end)
		size = 1;
	if (start < end)
		size = (end - start) + 1;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (0);
	while (i < size)
	{
		if (start < end)
		{
			result[i] = start;
			start++;
			i++;
		}
		else
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return (result);
}
/*
int	main(void)
{
	int	start = 20;
	int end = 150;
	int	i = 0;
	int	limit = 0;
	int	*result = ft_range(start, end);
	
	if (start == end)
		limit = 1;
	if (start > end)
		limit = start - end + 1;
	if (start < end)
		limit = end - start + 1;
	while (i < limit)
	{
		printf ("%d ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/