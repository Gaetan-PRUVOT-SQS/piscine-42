/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpruvot <gpruvot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 14:05:11 by gpruvot           #+#    #+#             */
/*   Updated: 2026/08/26 14:20:36 by gpruvot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*int main(void)
{
	ft_is_negative(-5); 
	write(1, "\n", 1);  
	
	ft_is_negative(0);  
	write(1, "\n", 1); 
	
	return (0);
}*/
