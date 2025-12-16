/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:11:11 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 13:11:26 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}*/
