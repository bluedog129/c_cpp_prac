#include <stdio.h>

void hanoi(int n, int from, int tmp, int to)
{
    if (n == 1)
        printf("%d %d\n", from, to);
    else
    {
        hanoi(n - 1, from, to, tmp);
        printf("%d %d\n", from, to);
        hanoi(n - 1, tmp, from, to);
    }
}

void hanoi_count(int n, int from, int tmp, int to, int *pt)
{
    if (n == 1)
        *pt += 1;
    else
    {
        hanoi_count(n - 1, from, to, tmp, pt);
        *pt += 1;
        hanoi_count(n - 1, tmp, from, to, pt);
    }
}

int main()
{
    int n = 0;
    int from = 1;
    int temp = 2;
    int to = 3;
    int count = 0;
    int *pt = &count;

    scanf("%d", &n);
    hanoi_count(n, from, temp, to, pt);
    printf("%d\n", count);
    hanoi(n, from, temp, to);
}