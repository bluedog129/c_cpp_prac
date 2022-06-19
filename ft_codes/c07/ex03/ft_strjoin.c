/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:23:55 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/02 16:36:25 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		a;
	int		b;
	int		count;

	b = 0;
	n = 0;
	a = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[n++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main()
{
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];

	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "chj";
	ex03_arr1 = ft_strjoin(5, ex03_str, " ");
    ex03_arr2 = ft_strjoin(5, ex03_str, ".");
    ex03_arr3 = ft_strjoin(5, ex03_str, "-");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}
*/
