/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:38:55 by bmakhama          #+#    #+#             */
/*   Updated: 2023/12/27 16:52:51 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	final_length(char **strings, int size, int sep_length)
{
	int	fin_len;
	int	i;

	fin_len = 0;
	i = 0;
	while (i < size)
	{
		fin_len += ft_strlen(strings[i]);
		fin_len += sep_length;
		i++;
	}
	fin_len -= sep_length;
	return (fin_len);
}

int	ft_r(char **strs, int size, char *sep)
{
	int		full_length;

	full_length = final_length(strs, size, ft_strlen(sep));
	return (full_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	string = (char *)malloc((ft_r(strs, size, sep) + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		str_cpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			str_cpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	*d = '\0';
	return (string);
}

int	main(void)
{
	int		size;
	char	**str;
	char	*seperator;
	char	*result;

	size = 3;
	str = (char **)malloc(3 * sizeof(char *));
	str[0] = (char *)malloc(sizeof(char) * 5 + 1);
	str[1] = (char *)malloc(sizeof(char) * 6 + 1);
	str[2] = (char *)malloc(sizeof(char) * 12 + 1);
	str[0] = "Hello";
	str[1] = "this is";
	str[2] = "42 Abu Dhabi";
	seperator = " ";
	result = ft_strjoin(size, str, seperator);
	printf ("%s", result);
	free(result);
	return (0);
}
