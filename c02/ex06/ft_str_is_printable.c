/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 09:49:15 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/02 10:31:14 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("Bonjour 42!"));
	printf("%d\n", ft_str_is_printable("Bonjour\n"));
	printf("%d\n", ft_str_is_printable(""));
}*/
