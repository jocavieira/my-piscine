/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:20:36 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/02/01 13:23:00 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

int	main(void)
{
	char *str = "teste um doi tres";
	ft_putstr(str);
	return (0);
}
