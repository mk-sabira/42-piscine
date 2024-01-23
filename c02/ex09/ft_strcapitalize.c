/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:15:08 by bmakhama          #+#    #+#             */
/*   Updated: 2023/11/04 09:08:29 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	ft_clowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	str = ft_strupcase(str);
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || \
		(str[i - 1] >= 'a' && str [i - 1] <= 'z') || \
		(str[i - 1] >= 49 && str[i - 1] <= 57))
		{
			str[i] = ft_clowcase(str[i]);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
