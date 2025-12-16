/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:44:01 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/20 18:42:38 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
/*
int	main(void)
{
	int 	i = 0;
	int	tab[] = {9,8,7,6,5,4,3,2,1};
	int	size = 9;
	while (i < size)
	{
	printf("%d", tab[i]);
	printf("\n");
	i++;
	}


	ft_sort_int_tab(tab, size);
	
	i = 0;
	while (i < size)
	{
	printf("%d", tab[i]);
	i++;
	}
	printf("\n");
	return (0);
}*/
