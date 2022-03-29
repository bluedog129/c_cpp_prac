#include <stdio.h>

#define COLS 4

int sum_1d(int arr[], int n);
int sum_2d(int arr[][COLS], int rows);

int main() {
    int arr1[2] = {1,2};
    int arr2[2][COLS] = {{1,2,3,4}, {5,6,7,8}};

    // 선언한 배열 변수를 이용하여 함수 사용
    printf("%d\n", sum_1d(arr1, 2));
    printf("%d\n", sum_2d(arr2, 2));
    printf("\n");
    // 리터럴 상수를 사용하여 함수에 배열을 파라미터로 넣음
    printf("%d\n", sum_1d((int[2]) {1,2}, 2));
    printf("%d\n", sum_2d((int[][COLS]) {{1,2,3,4}, {5,6,7,8}}, 2));
    printf("\n");

    int* ptr1;
    int(*ptr2)[COLS];

    ptr1 = (int[2]){1,2};
    ptr2 = (int[2][COLS]){{1,2,3,4}, {5,6,7,8}};

    // 배열의 주소를 담은 포인터를 이용하여 파라미터로 함수에 전달
    printf("%d\n", sum_1d(ptr1, 2));
    printf("%d\n", sum_2d(ptr2, 2));
    printf("\n");

    return 0;
}

int sum_1d(int arr[], int n) {
    int total = 0;
    for (int i = 0; i<n; ++i) {
        total += arr[i];
    }

    return total;
}

int sum_2d(int arr[][COLS], int rows) {
    int total = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            total += arr[r][c];
        }
    }

    return total;
}