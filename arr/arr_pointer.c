#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};

    printf("whole size : %d\n", sizeof(arr));
    printf("amount of rows : %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("amount of cols : %d\n", sizeof(arr) / sizeof(arr[0]));

    ///////////////////////////////////

    int arr2[2][3] = {{1,2,3},{4,5,6}};

    // 2차원 배열을 가리키는 포인터는 배열의 크기에 관한 정보가 있어야 함
    // 2차원 배열을 가리키는 포인터는 < 배열의 형 (*(포인터이름))[2차원 배열의 열개수] > 이다.
    int(*parr)[3]; // 괄호를 꼭 붙여야함

    parr = arr; // parr 이 arr 을 가리키게 한다.

    printf("arr[1][1] : %d \n", arr[1][1]);
    printf("parr[1][1] : %d \n", parr[1][1]);
    

    return 0;
}