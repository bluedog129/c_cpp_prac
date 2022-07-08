#include <stdio.h>
#include <stdlib.h> 

int n;
int vx[16];
int vy[16];

int n_queen(int y, int x)
{
    // 가지치기 (back tracking)
    for (int i = 0; i < y; i++)
    {
        if (y == vy[i]) 
            return 0;
        if (x == vx[i])
            return 0;
        if (abs(x - vx[i]) == abs(y - vy[i]))
            return 0;
    }
    // 종료조건
    if (y == n - 1)
    {
        // 말단에서 퀸 배열이 성공적인지 체크
        // 만약 성공적이면 1리턴
        return 1;
    }

    vy[y] = y;
    vx[y] = x;

    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r += n_queen(y + 1, i);
    }
    return r;
}

int main(void)
{
    scanf("%d", &n);
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r += n_queen(0, i);
    }
    printf("%d\n", r);

    return 0;
}