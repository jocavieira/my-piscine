/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:27:46 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/22 13:21:27 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size == 0)
		return (src_length);
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*
#include <stdio.h>
int	main(void)
{
	char source[] = "Abacate com queijo eh bom";
	char destination [19];
	unsigned int result;
	result = ft_strlcpy(destination, source, sizeof (destination));
	printf ("the source string is: %s\n", source);
	printf ("the destination string is : %s\n", destination);
	printf ("the result of ft_strlcpy is %u\n", result);
	return (0);
}*/
