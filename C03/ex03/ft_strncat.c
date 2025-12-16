/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:49:01 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 12:49:25 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*#include <stdio.h>
int     main(void)
{
        char *src = "do rei de roma";
        char dest[100] = "o rato roeu a roupa ";
        char *result;
	unsigned int size= 6;

        result = ft_strncat(dest, src, size);
        printf("%s\n", result);
        return (0);
}*/
