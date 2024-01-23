/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:51:50 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/02 12:58:14 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
		(str[i] >= 'A' && str[i] <= 'Z'))
		{
			++i;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[1];

	str[0] = 'n';
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}*/
