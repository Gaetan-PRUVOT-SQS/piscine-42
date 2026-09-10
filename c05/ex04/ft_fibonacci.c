/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 08:30:42 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/08 16:11:00 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index >= 2)
		return (ft_fibonacci (index - 1) + (ft_fibonacci (index - 2)));
	return (0);
}

/*int	main(void)
{
	int	i;

	i = 8;
	printf("%d", ft_fibonacci(i));
	return (0);
}*/
