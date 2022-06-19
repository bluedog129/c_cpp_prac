/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 03:35:39 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/02 13:32:29 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	n = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[n++] = min++;
	return (n);
}
/*
#include <stdio.h>
int main()
{
    int	*ex02_arr1;
    int	*ex02_arr2;
    int	*ex02_arr3;
	int size1 = ft_ultimate_range(&ex02_arr1, 5, 10);
    int size2 = ft_ultimate_range(&ex02_arr2, -4, 10);
    int size3 = ft_ultimate_range(&ex02_arr3, 10, 1);
    
    printf("min : 5, max : 10, size : %d\n", size1);
	for (int i = 0; i < size1 ; i++)
	{
		printf("%d ", ex02_arr1[i]);
	}
    printf("\n\n");
    printf("min : -4, max : 10, size : %d\n", size2);
	for (int i = 0; i < size2 ; i++)
	{
		printf("%d ", ex02_arr2[i]);
	}
    printf("\n\n");
    printf("min : 10, max : 1, size : %d\n", size3);
	printf("%p ", ex02_arr3);
    printf("\n\n");
    free(ex02_arr1);
    free(ex02_arr2);
    free(ex02_arr3);
}
*/
