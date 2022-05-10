#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d_1(int ar[ROWS][COLS]);
int sum2d_2(int ar[][COLS], int row);
int sum2d_3(int* ar, int row, int col);


int main() {
    int data[ROWS][COLS] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,2}
    };
    // 배열 인덱스로 원하는 위치의 배열 요소를 출력
    printf("%d\n", data[2][3]);

    int* ptr = &data[0][0]
    ;
    printf("%d\n", *(ptr + 3 + COLS * 2));  // 원하는 위치의 ROWS만큼 COLS값에 곱하고  

    printf("Sum of all elements = %d\n", sum2d_1(data));
    printf("Sum of all elements = %d\n", sum2d_2(data, ROWS));
    printf("Sum of all elements = %d\n", sum2d_3(&data[0][0], ROWS, COLS));

    return 0;
}

// 파라미터를 정의 할때, 컴파일러는 배열의 첫번째 인덱스변수를 무시한다 따라서 첫번째 인덱스의 변수 정보는 함수로 전달되지 않는다.
int sum2d_1(int ar[ROWS][COLS]) {
    int r, c, tot = 0;
    for (r = 0; c < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }

    return tot;
}

// 위의 함수에서 첫번째 인덱스 변수가 무시되는 점을 고려하여 첫 인덱스 변수를 따로 파라미터로 받는다.
int sum2d_2(int ar[][COLS], int row) {
    int r, c, tot = 0;
    for (r = 0; r < row; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }

    return tot;
}

int sum2d_3(int* ar, int row, int col) {
    int r, c, tot = 0;
    for (r = 0; r < row; r++) {
        for (c = 0; c <col; c++) {
            tot += *(ar + c + col * r);
        }
    }
    
    return tot;
}