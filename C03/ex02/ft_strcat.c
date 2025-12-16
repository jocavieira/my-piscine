/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:22:36 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 16:24:51 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char*src)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*#include <stdio.h>
int     main(void)
{
        char *src = "do rei de roma";
        char dest[100] = "o rato roeu a roupa ";
        char *result;

        result = ft_strcat(dest, src);
        printf("%s\n", result);
        return (0);
}*/
