/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:45:51 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/03 19:04:55 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*array;
	struct s_stock_str	*d;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	d = array;
	if (!d)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_str_length(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index].str = 0;
	array[index].copy = 0;
	return (array);
}
