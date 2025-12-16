/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:51:18 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 12:51:26 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;

	i = 0;
	j = 0;
	srclen = 0;
	while (dest[i] != 0 && i < size)
		i++;
	while (src[srclen] != 0)
		srclen++;
	if (size <= i)
		return (size + srclen);
	while (src[j] != 0 && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + srclen);
}
/*#include <stdio.h>
int	main(void)
{
	char dest[30] = "the beginning";
	char *src =" and the end";
	unsigned int size = 26;
	unsigned int result = ft_strlcat(dest,src,size);
	printf ("dest is : %s\n", dest);
	printf ("dest is : %d\n", result);
	return (0);
}*/
