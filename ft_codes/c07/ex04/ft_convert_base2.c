/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:23:02 by hyojchoi          #+#    #+#             */
/*   Updated: 2022/05/03 21:34:42 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(unsigned char *str);

int	count_len(int num, unsigned char *base)
{
	int	count;
	int	base_num;

	count = 0;
	base_num = ft_strlen(base);
	while (num / base_num > 0)
	{
		num = num / base_num;
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char src)
{
	int	index;

	index = ft_strlen((unsigned char *)dest);
	dest[index++] = src;
	dest[index] = 0;
	return (dest);
}

void	rec_base(int n, unsigned char *base, int base_size, char *ret)
{
	if (n < base_size)
		ft_strcat(ret, base[n]);
	else
	{
		rec_base(n / base_size, base, base_size, ret);
		ft_strcat(ret, base[n % base_size]);
	}
}