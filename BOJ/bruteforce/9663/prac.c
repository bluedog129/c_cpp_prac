#include <stdio.h>
#include <stdlib.h> 

int n;
int vx[16];
int vy[16];

int n_queen(int y, int x)
{
    for (int i = 0; i < y; i++)
    {
        if (y == vy[i])
            return 0;
        if (x == vx[i])
            return 0;
        if (abs(x - vx[i]) == abs(y - vy[i]))
            return 0;
    }

    if (y == n - 1)
    {
        return 1;
    }

    vy[y] = y;
    vx[y] = x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += n_queen(y + 1, i);
    }
    return count;
}

int main(void)
{
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += n_queen(0, i);
    }
    printf("%d\n", count);

    return 0;
}