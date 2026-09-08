/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 19:22:37 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/02 20:15:37 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[30] = "Bonne piscine ";
	char	src[] = "Vive 42";
	
	printf("Avt : %s\n", dest);
	ft_strncat(dest, src, 5);
	printf("Apr (nb = 5) : %s\n", dest);
	ft_strncat(dest, " et tout le monde !", 20);
	printf("Apr (compl) : %s\n", dest);
	return (0);
}*/
