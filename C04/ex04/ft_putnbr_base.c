/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:39:22 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 18:15:32 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		if (base[i] == base[j])
			return (0);
		else
			j++;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	n;
	char	fnb[20];
	int		bas_len;

	bas_len = baselen(base);
	i = 0;
	n = nbr;
	if (basevalid(base))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n == 0)
			write(1, "0", 1);
		while (n)
		{
			fnb[i++] = base[n % bas_len];
			n = n / bas_len;
		}
		while (i > 0)
			write(1, &fnb[--i], 1);
	}
}
/*int	main(void)
{
	int n = 42;
	char *base = "01234567";
	ft_putnbr_base(n, base);
	return (0);
}*/
