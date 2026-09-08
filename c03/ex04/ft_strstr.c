/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:56:12 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/08 09:59:18 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Hello World";
	char	*a;

	a = ft_strstr(str, "World");
	printf("%s\n", a);
	a = ft_strstr(str, "42");
	if (a == 0)
	printf("pas trouve\n");
	else
	printf("%s\n", a);
	a = ft_strstr(str, "");
	printf("%s\n", a);
	return (0);
}*/
