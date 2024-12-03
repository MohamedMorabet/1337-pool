/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:20:24 by mel-mora          #+#    #+#             */
/*   Updated: 2024/08/29 19:01:23 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar ((n1 / 10) + 48);
			ft_putchar ((n1 % 10) + 48);
			ft_putchar (' ');
			ft_putchar ((n2 / 10) + 48);
			ft_putchar ((n2 % 10) + 48);
			if (n1 != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			n2++;
		}
		n1++;
	}
}
