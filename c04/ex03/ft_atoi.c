/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:04:55 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/07 18:04:51 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '-' || *str == '+' )
	{
		if (*str == '-')
			i++;
		++str;
	}
	while (*str >= 48 && *str <= 58)
	{
		nb = nb * 10;
		nb = nb + (*str - 48);
		++str;
	}
	if (! (i % 2))
	{
		return (nb);
	}
	return (-nb);
}

// int	main(void)
// {
// 	printf ("%d", ft_atoi("      +--+--+12346de1"));
// }
