/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:02:23 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/20 18:39:06 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write (1, (str + index), 1);
		index++;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	char	*str;

	str = "Hello, world";
	ft_putstr(str);
	return (0);
}*/
