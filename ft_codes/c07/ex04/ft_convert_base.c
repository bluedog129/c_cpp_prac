/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:36:33 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/03 21:43:14 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_len(int num, unsigned char *base);
void	rec_base(int n, unsigned char *base, int base_size, char *ret);

int	ft_strlen(unsigned char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	find_base(unsigned char *base, char c)
{
	int	idx;

	idx = ft_strlen(base);
	while (--idx >= 0)
	{
		if (c == base[idx])
			return (idx);
	}
	return (-1);
}

int	check_base(unsigned char *base)
{
	int	idx;
	int	chr[256];

	idx = 0;
	while (idx < 256)
		chr[idx++] = 0;
	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		if (base[idx] == ' ' || (9 <= base[idx] && base[idx] <= 13))
			return (0);
		if (chr[(int)base[idx]] != 0)
			return (0);
		chr[(int)base[idx++]] = 1;
	}
	if (idx < 2)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, unsigned char *base)
{
	int		idx;
	int		sign;
	int		res;
	int		base_len;

	sign = 1;
	res = 0;
	idx = 0;
	base_len = ft_strlen(base);
	while (str[idx] == ' ' || (9 <= str[idx] && str[idx] <= 13))
		idx++;
	while (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign *= (-1);
		idx++;
	}
	while (find_base(base, str[idx]) >= 0)
	{
		res = res * base_len + find_base(base, str[idx]);
		idx++;
	}
	return (sign * res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				dec;
	char			*ret;
	int				len_to;
	unsigned char	*b_from;
	unsigned char	*b_to;

	b_from = (unsigned char *)base_from;
	b_to = (unsigned char *)base_to;
	if (!check_base(b_from) || !check_base(b_to))
		return (0);
	dec = ft_atoi_base(nbr, b_from);
	len_to = count_len(dec, b_to);
	ret = (char *)malloc(sizeof(char) * (len_to + 2));
	if (!ret)
		return (0);
	ret[0] = 0;
	if (dec < 0)
	{
		ret[0] = '-';
		ret[1] = 0;
		dec = -dec;
	}
	rec_base(dec, b_to, ft_strlen(b_to), ret);
	return (ret);
}
