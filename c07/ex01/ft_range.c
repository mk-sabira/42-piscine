/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:31 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/14 16:30:25 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*new;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		new = (int *)malloc((max - min) * sizeof(int));
		while (min < max)
		{
			new[i] = min;
			min++;
			i++;
		}
	}
	return (new);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*result;
// 	int	tab;
// 	int	i;

// 	max = 10;
// 	min = 5;
// 	i = 0;
// 	tab = max - min;
// 	result = ft_range(min, max);
// 	while (i < tab)
// 	{
// 		printf("%d\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }
