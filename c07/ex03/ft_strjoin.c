/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:04:25 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/14 11:18:37 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len_of(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	add_sep(char *str, char *sep, int *i)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		str[*i] = sep[j];
		j++;
		(*i)++;
	}
}

void	concat_str(char *resu, char *str, int *indice)
{
	int	j;

	j = 0;
	while (str[j])
	{
		resu[*indice] = str[j];
		(*indice)++;
		j++;
	}
}

int	len_total(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += len_of (strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*resu;
	int		len;
	int		indice;

	len = 0;
	indice = 0;
	len += len_total (strs, size);
	resu = (char *)malloc(len + (size - 1) * (len_of (sep)) + 1);
	i = 0;
	if (!resu)
		return (NULL);
	while (i < size)
	{
		concat_str(resu, strs[i], &indice);
		if (i < size - 1)
			add_sep (resu, sep, &indice);
		i++;
	}
	resu[indice] = '\0';
	return (resu);
}
