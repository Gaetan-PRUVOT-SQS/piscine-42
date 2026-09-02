/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 17:16:33 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/02 08:21:11 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	swp;

	i = 0;
	s = size - 1;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[s];
		tab[s] = swp;
		i++;
		s--;
	}
}

/*int	main(void)
{
	int	tab[] = {1, 2, 3};

	ft_rev_int_tab(tab, 3);
	printf("%d%d%d\n", tab[0], tab[1], tab[2]);
}*/
