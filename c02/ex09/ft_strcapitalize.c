/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <mel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:26:44 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/02 18:42:00 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_notalphanum(char c)
{
	return ((c < '0' || c > '9') 
		&& (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || ft_notalphanum(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
