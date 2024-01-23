/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:48:21 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/14 10:55:36 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

// int	main()
// {
// 	char *str = "hello";
// 	char	*mine;
// 	char	*their;

// 	mine = ft_strdup(str);
// 	their = strdup(str);
// 	printf (":%s:\n:%s:\n", mine, their);
// 	return (0);
// }
