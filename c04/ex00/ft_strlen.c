/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:13:15 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/04 11:23:01 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[] = "123abcd";

	printf("%d", ft_strlen(str));
	return (0);
}*/
