/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:44:35 by mel-mora          #+#    #+#             */
/*   Updated: 2024/09/04 18:45:38 by mel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	return_val;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	return_val = len_dest + len_src;
	if (size == 0 || len_dest >= size)
		return_val = size + len_src;
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (return_val);
}
/*
int main()
{
	// Test case 3: Size is exactly the length of dest + 1
    char dest3[10] = "hello";
    char src3[] = " World";
    unsigned int size3 = 12;
    printf("Test case 3:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest3, src3);
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    printf("After: dest = \"%s\"\n", dest3);
    printf("Return value: %u\n", result3);
    printf("\n");
}*/
