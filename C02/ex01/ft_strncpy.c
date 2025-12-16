/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:07:03 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/22 19:40:47 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int n = 20;
	char	src[] = "eu quero copiar ate la atras";
	char	dest[40] = {0};

	ft_strncpy(dest, src, n);
	printf("dest is: %s\n", dest);
	for (int i = 0; i < 40; i++)
	if (dest[i] == '\0')
	{
	printf("dest[%d] = \\0\n", i);
	}
	else 
	{
	printf("dest[%d] = %c\n", i, dest[i]);
	}
	return (0);
	
	
}*/
