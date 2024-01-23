/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:24:52 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/06 15:48:46 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main( void )
{
	char	s1[] = "atd";
	char	s2[] = "abc";
    printf ("%d\n", ft_strncmp( "abcdef", "abcdef", 3));
    printf ("%d\n", ft_strncmp( s1, s2, 6));
    return (0);
}*/

/*
i < n - 1
i < 3
i = 0 
i = 1 
i = 2 
i = 3;
return (s1[2] - s2[2]);
*/