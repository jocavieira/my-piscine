/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:43:27 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/22 13:52:52 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	copy[100];
	char	src[] = "Copy this if u can";
	char	*result;
	result = ft_strcpy(copy, src);
	printf("dest:  %s\n", copy);
	printf("result is : %s\n", result);
	return (0);
}*/
