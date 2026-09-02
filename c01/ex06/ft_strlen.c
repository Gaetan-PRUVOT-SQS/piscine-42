/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:30:03 by gpruvot           #+#    #+#             */
/*   Updated: 2026/09/01 07:58:29 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "Hello";
	b = "";
	c = "42";
	ft_putnbr(ft_strlen(a));
	write(1, "\n", 1);
	ft_putnbr(ft_strlen(b));
	write(1, "\n", 1);
	ft_putnbr(ft_strlen(c));
	write(1, "\n", 1);
	return (0);
}*/
