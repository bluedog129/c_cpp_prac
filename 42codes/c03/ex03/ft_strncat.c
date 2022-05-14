/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:48:55 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/25 01:24:57 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb == 0)
		return (dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
    char str1[10] = "abc";
    char str2[] = "def";

    //strcat
    ft_strncat(str1, str2, 2); 
    printf("strncat : %s\n", str1);

    return 0;
}
*/
