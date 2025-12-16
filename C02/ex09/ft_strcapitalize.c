/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:08:42 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/22 21:37:44 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] -= ' ';
	}
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += ' ';
		}
		if ((str[i] >= 97 && str[i] <= 122)
			&& (str[i - 1] >= 32 && str[i - 1] <= 47))
		{
			str[i] -= ' ';
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "oi,tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
