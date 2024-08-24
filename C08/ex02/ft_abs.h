/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:40:35 by bmakhama          #+#    #+#             */
/*   Updated: 2024/01/21 15:47:47 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_ABS_H
# define FT_ABS_H

# define ABS(x) do {if ((x) < 0 {(x) = -(x); } } while(0)

# include <stdio.h>

#endif