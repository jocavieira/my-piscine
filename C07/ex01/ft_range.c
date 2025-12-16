/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:42:54 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/02/03 16:39:09 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	i = 0;
	if (min >= max)
		return (NULL);
	a = malloc (sizeof(int) * (max - min));
	if (!a)
		return (NULL);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/*#include <stdio.h>
int	main(void)
{
	int a = 3, b = 10;
	int *s = ft_range(a, b);
	for (int i = 0; i < (b - a); i++)
		printf("%d\n", s[i]);
	free(s);
	return (0);
}*/	
