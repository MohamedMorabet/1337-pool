/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:08:21 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/07 13:39:55 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	resu;

	i = 0;
	sign = 0;
	resu = 0;
	while (str[i] == ' ' || str[i] == '\t' || (str[i] <= 13 && str[i] >= 9))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		resu = resu * 10 + (str[i] - 48);
		i++;
	}
	if (sign % 2 == 0)
		return (resu);
	return (-resu);
}
