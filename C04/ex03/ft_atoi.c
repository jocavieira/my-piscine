/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:34:30 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 13:08:30 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int	number;
	int	i;

	negative = 1;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number * negative);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str2;

	str = "    --+345";
	str2 = "    ---+999933abc";
	ft_atoi(str);
	ft_atoi(str2);
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
	return (0);
}*/
