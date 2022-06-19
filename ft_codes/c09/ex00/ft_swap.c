/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euiclee <@student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:41:53 by euiclee           #+#    #+#             */
/*   Updated: 2022/04/16 11:11:07 by euiclee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//#include <stdio.h>
//int	main(void)
//{
//	int a = 20;
//	int b = 42;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	ft_swap(&a, &b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
