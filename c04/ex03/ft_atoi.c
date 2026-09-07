/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:26:43 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/07 13:15:26 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <unistd.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * s);
}

/*int	main(void)
{
	char str[] = "  ----123456+-acdgghASDFH";
	
	printf("%d", ft_atoi(str));
	return (0);
}*/
