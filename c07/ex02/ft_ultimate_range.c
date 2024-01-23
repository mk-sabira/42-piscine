/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:44:25 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/14 16:30:43 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *) malloc(size * sizeof(int));
	if (range == 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int	main(void)
// {
// 	int	size;
// 	int	*result;
// 	int	i;

// 	size = ft_ultimate_range(&result, 5, 15);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf ("%d\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }
