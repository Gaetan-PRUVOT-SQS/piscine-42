/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 10:56:25 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/08 09:19:00 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (j == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j = 0;
		else if (str[i] >= 'a' && str[i] <= 'z')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*int    main(void)
{
    char    a[] = "salut, comment tu vas ?";
    char    b[] = "42mots quarante-deux";
    char    c[] = "HELLO +un";

    printf("%s\n", ft_strcapitalize(a));
    printf("%s\n", ft_strcapitalize(b));
    printf("%s\n", ft_strcapitalize(c));
    return (0);
}*/
