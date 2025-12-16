/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:08:31 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/02/03 18:02:06 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	omin;

	omin = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - omin);
}
/*#include <stdio.h>

int	main(void)
{
	int *a;
	int size = ft_ultimate_range(&a, 3, 10);

	for (int i = 0; i < size; i++)
		printf("%d", a[i]);
	printf("\n");
	free (a);
	return (0);
}*/
