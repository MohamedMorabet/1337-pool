/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:34:43 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/03 14:35:22 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexadecimal;

	i = 0;
	hexadecimal = "0123456789abcdef";
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] >= 127)
		{
			write (1, "\\", 1);
			write (1, &hexadecimal[(unsigned char)str[i] / 16], 1);
			write (1, &hexadecimal[(unsigned char)str[i] % 16], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
