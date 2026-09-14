/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:15:32 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/14 09:09:04 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (0);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(3, 8);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
