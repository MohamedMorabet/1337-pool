/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:08:48 by mel-mora          #+#    #+#             */
/*   Updated: 2024/08/31 13:25:29 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		putchar ('-');
		nb *= -1;
		ft_putnbr (nb);
	}
	else if (nb < 9)
	{
		putchar (nb + 48);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		putchar ((nb % 10) + 48);
	}
}
