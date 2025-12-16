/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:04:59 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 13:06:53 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	baselen(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}

int	basevalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (baselen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9
				&& base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	getvalue(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	positive;
	int	result;
	int	value;

	i = 0;
	result = 0;
	positive = 1;
	if (!basevalid(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+'
		|| str[i] == '-')
	{
		if (str[i++] == '-')
			positive = -positive;
	}
	while (str[i])
	{
		value = getvalue(str[i++], base);
		if (value == -1)
			break ;
		result = result * baselen(base) + value;
	}
	return (result * positive);
}
/*#include <stdio.h>

int	main(void)
{
	char *str = "      -2af";
	char *base = "0123456789abcdef";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}*/
