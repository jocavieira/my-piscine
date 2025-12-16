/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:11:31 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 14:21:44 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
		printf("%d\n", ft_find_next_prime(2));
		printf("%d\n", ft_find_next_prime(3));
		printf("%d\n", ft_find_next_prime(11));
		printf("%d\n", ft_find_next_prime(12));
		printf("%d\n", ft_find_next_prime(15));
		return (0);
}*/
