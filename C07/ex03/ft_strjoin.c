/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:11:30 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/02/03 18:33:30 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = 0;
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		tot_len;
	int		i;

	tot_len = 0;
	i = 0;
	if (size <= 0)
		return (NULL);
	while (i < size)
		tot_len += ft_strlen(strs[i++]);
	tot_len += ft_strlen(sep) * (size - 1);
	new = malloc(sizeof(char) * tot_len + 1);
	ft_strcpy(new, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(new, sep);
		ft_strcat(new, strs[i]);
		i++;
	}
	return (new);
}
/*#include <stdio.h>
int	main (void)
{
	char *new;
	char *str[] = {"eu gosto", "muito", "de sorvete"};
	new = ft_strjoin(3, str, " ");
	printf("%s", new);
	free (new);
	return (0);
}*/
