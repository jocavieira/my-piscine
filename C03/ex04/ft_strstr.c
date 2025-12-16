/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:50:23 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/01/29 12:50:35 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != 0)
			j++;
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char *str = "teste abobora limao com uva";
	char *str2 = "limao com uva";
	ft_strstr(str, str2);
	printf ("%s\n", ft_strstr(str, str2));
	return (0);
}*/
