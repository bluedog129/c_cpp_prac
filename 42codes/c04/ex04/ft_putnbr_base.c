/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:59:39 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/04/30 14:18:42 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(long long nbr, int i, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putnbr(nbr, i, base);
	}
	else
	{
		if (nbr > i - 1)
			ft_putnbr(nbr / i, i, base);
		ft_putchar(base[nbr % i]);
	}
}

int	ft_check(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || len == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
	while (base[i])
		i++;
	if (ft_check(base, i) == 1)
		ft_putnbr(nbr, i, base);
}
/*
int main()
{
	int nbr = -12345;
	char base[] = "0123456789abcdef";
	ft_putnbr_base(nbr, base);
}
*/
