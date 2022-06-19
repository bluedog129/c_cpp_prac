/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:08:34 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/25 01:26:18 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_s;
	unsigned int	src_s;

	dest_s = 0;
	src_s = 0;
	while (*dest != '\0')
	{
		dest_s++;
		dest++;
	}
	while (*src != '\0' && src_s + dest_s + 1 < size)
	{
		*dest++ = *src++;
		src_s++;
	}
	while (*src++ != '\0')
	{
		src_s++;
	}
	*dest = '\0';
	if (dest_s > size)
		return (src_s + size);
	else
		return (dest_s + src_s);
}
/*
#include <stdio.h>
int main() {
	char dest[] = "abcdef";
	char src[] = "ghij";
	printf("%d", ft_strlcat(dest, src, 10));
}
*/
