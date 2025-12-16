/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:16:00 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/20 18:32:25 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 12;
	printf("the values of a and b are %d and %d\n", a,b);
	ft_swap(&a,&b);
	printf("the values of a and b after the swap are %d and %d\n", a,b);
	return (0);
}*/
