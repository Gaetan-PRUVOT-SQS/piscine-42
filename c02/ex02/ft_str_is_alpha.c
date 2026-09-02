/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:12:23 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/02 07:36:50 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || (*str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdehjpqsw";
	str2 = "ab1";
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}*/
