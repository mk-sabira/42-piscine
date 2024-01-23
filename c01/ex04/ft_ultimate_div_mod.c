/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:53:58 by bmakhama          #+#    #+#             */
/*   Updated: 2023/10/31 11:59:21 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 10;
	d = 3;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", c);
	printf("%d", d);
}*/
