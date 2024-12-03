/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:59:00 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/07 13:46:55 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-214748364", 11);
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
		ft_putnbr (nb);
	}
	else if (nb <= 9)
	{
		ft_putchar (nb + 48);
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + 48);
	}
}
