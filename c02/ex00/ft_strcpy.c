/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 10:11:06 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/01 07:37:15 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <string.h>
#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[20];

	src = "Bonjour";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
