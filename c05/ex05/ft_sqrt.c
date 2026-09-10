/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 08:58:22 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/08 16:18:44 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*int	main()
{
	int	nb;

	nb = 5 * 5;
	printf("%d", ft_sqrt(nb));
}*/
