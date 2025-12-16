/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:45:51 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 16:21:17 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int     main(void)
{
	unsigned int  n = 2;
        char *str1 = "Apple";
        char *str2 = "ApPle";
        char *str3 = "apple";
        printf("%d\n", ft_strncmp(str1, str2, n));
        printf("%d\n", ft_strncmp(str2, str3, 3));
        printf("%d\n", ft_strncmp(str3, str2, 2));
        printf("%d\n", ft_strncmp(str3, str2, 1));
        return (0);
}*/
