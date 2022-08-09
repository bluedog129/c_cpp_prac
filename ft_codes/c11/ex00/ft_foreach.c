#include <unistd.h>

void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int     n;

    n = 0;
    while (n < length)
        f(tab[n++]);
    return;
}

void    ft_putnbr(int i)
{
    i = i + '0';
    write(1, &i, 1);
}

int main() {
    int tab[5] = {1,2,3,4,5};

    ft_foreach(tab, 5, &ft_putnbr);
}