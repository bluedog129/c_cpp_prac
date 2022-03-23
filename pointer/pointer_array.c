#include <stdio.h>

int main() {

    int arr0[3] = {1,2,3};
    int arr1[3] = {4,5,6};

    int* parr[2] = {arr0, arr1};

    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 3; ++i) {
            printf("%d(==%d) ", parr[i][j], *(parr[j] + i));
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}