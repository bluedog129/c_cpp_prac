/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:54:55 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/27 21:27:52 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
        printf("%d -> %d\n", -3350, ft_is_prime(-3350));
        printf("%d -> %d\n", -12, ft_is_prime(-12));
        printf("%d -> %d\n", 0, ft_is_prime(0));
        printf("%d -> %d\n", 1, ft_is_prime(1));
        printf("%d -> %d\n", 2, ft_is_prime(2));
        printf("%d -> %d\n", 4219, ft_is_prime(4219));
        printf("%d -> %d\n", 7853, ft_is_prime(7853));
        printf("%d -> %d\n", 78989, ft_is_prime(78989));
        printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
}
*/
