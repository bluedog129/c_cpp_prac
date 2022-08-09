#include <stdlib.h>
#include <stdio.h>

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int	n;
	int	*reb;

	n = 0;
	reb = malloc(sizeof(int) * length);
	if (!reb || length < 1)
		return (NULL);
	while (n < length)
	{
		reb[n] = (*f)(tab[n]);
		n++;
	}
	return (reb);
}

int     ft_putnbr(int num)
{
    printf("%d ", num);
    return num;
}

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    int length = 5;

    ft_map(tab, length, &ft_putnbr);
}