/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:43:43 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/27 16:15:32 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int main() {
	printf("fibonacci of %d is %d\n", -3652, ft_fibonacci(-3652));
    printf("fibonacci of %d is %d\n", 0, ft_fibonacci(0));
    printf("fibonacci of %d is %d\n", 1, ft_fibonacci(1));
    printf("fibonacci of %d is %d\n", 2, ft_fibonacci(2));
    printf("fibonacci of %d is %d\n", 3, ft_fibonacci(3));
    printf("fibonacci of %d is %d\n", 5, ft_fibonacci(5));
    printf("fibonacci of %d is %d\n", 13, ft_fibonacci(13));
}
*/
