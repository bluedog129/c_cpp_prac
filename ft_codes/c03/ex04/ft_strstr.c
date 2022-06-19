/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:07:32 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/23 15:18:24 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (*(str + i) == *(to_find + i))
		{
			i++;
			if (*(to_find + i) == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
	char a[] = "lulualulala";
	char b[] = "lula";

	printf("%s", ft_strstr(a, b));
}
*/
