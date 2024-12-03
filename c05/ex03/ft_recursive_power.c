/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:25:54 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/08 13:45:25 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resu;

	resu = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		resu = nb * ft_recursive_power(nb, power - 1);
		return (resu);
	}
}
