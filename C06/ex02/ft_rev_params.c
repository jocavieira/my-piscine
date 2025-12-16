/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:59:30 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/30 14:33:48 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc -1;
	if (argc > 0)
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
				write (1, &argv[i][j++], 1);
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
