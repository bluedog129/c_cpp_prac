#include <stdio.h>

int main() {
    int arr[5] = {100, 99, 98, 97, 96};

    int* parr = arr;
    int sum = 0;

    while (parr - arr <= 4) {
        sum += (*parr);
        parr++;
    }

    printf("내 시험 점수 평균 : %d \n", sum / 5);

    /////////////////////

    int arr2[3] = {1,2,3};
    int (*parr2)[3] = &arr2;

    printf("arr[1] : %p \n", arr2[1]);
    printf("parr[1] : %p \n", (*parr2)[1]);

    /////////////////////////

    return 0;
}