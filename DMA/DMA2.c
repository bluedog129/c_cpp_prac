#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int x, y;
    int **arr;

    printf("arr[x][y]를 만들 것입니다.\n");
    scanf("%d %d", &x, &y);

    arr = (int **)malloc(sizeof(int *) * x);

    for (i = 0; i <x; i++) {
        arr[i] = (int *)malloc(sizeof(int *) * y);
    }

    printf("생성 완료! \n");

    for (i =0; i <x; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}