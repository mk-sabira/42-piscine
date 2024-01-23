/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:34:01 by bmakhama          #+#    #+#             */
/*   Updated: 2023/10/31 11:55:02 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr,	*ptr1;

	a = 18;
	b = 3;
	ptr = &div;
	ptr1 = &mod;
	ft_div_mod(a, b, ptr, ptr1);
	printf("%d\n", mod);
	printf("%d", div);
}*/
