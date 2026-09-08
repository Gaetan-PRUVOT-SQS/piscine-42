/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 08:11:41 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/07 10:33:16 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	r;

	f = 1;
	r = 1;
	if (nb < 0)
		return (0);
	while (f <= nb)
	{
		r *= f;
		f++;
	}
	return (r);
}

/*int	main()
{
	int	nb;
	
	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
}*/
