/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:30:15 by bmakhama          #+#    #+#             */
/*   Updated: 2023/10/31 12:10:04 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lengs;

	lengs = 0;
	while (*str != '\0')
	{
		lengs++;
		str++;
	}
	return (lengs);
}
/*
int	main(void)
{
	char	str_1[4];
	char	*str;
	char	count;

	str = str_1;
	str_1[0] = 'a';
	str_1[1] = 'b';
	str_1[2] = 'c';
	str_1[3] = 'd';
	count = ft_strlen(str);
	printf("%d", count);
	return (0);
}*/
