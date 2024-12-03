/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:38:56 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/17 18:10:49 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
	{
		ft_putchar (nb + 48);
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr (par[index].str);
		ft_putnbr (par[index].size);
		ft_putchar ('\n');
		ft_putstr (par[index].copy);
		index++;
	}
}
