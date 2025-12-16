/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:18:41 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/20 18:40:14 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (str[index] != '\0')
	{
		length++;
		index++;
	}
	return (length);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "hello world";
	int length = ft_strlen(str);
	printf("the length of the string is: %d\n", length);
	return (0);
}*/
