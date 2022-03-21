#include <stdio.h>

int main() {
    const double PI = 3.14159;
    // PI = 4.0;   const로 선언된 변수는 후에 다른 값으로 선언이 불가

    const int arr[5] = {1, 2, 3, 4, 5};
    // arr[1] = 123;  배열도 마찬가지

    const double arr2[3] = {1.0, 2.0, 3.0};
    // arr2[0] = 100.0;

    // arr2 배열의 주소를 pd 포인터 변수에 저장
    // dp 포인터로 arr2의 값으로 역참조하여 첫번째 인덱스 값을 바꿀 수 있다.
    double* pd = arr2;
    // const double* pd = arr2;  pd포인터가 가리키는 메모리의 값을 바꾸지 못함
    // double* const pd = arr2;  pd포인터변수의 값을 바꾸지 못한다.

    *pd = 3.0;
    printf("pd[0] = %f", pd[0]);
    printf("\n");

    // 포인터 변수가 배열의 주소값을 가리키고 있기 때문에 배열처럼 사용 가능
    pd[2] = 1024.0;  // arr2[2] = 1024.0;

    printf("%f", pd[2]);
    printf("\n");
    printf("%f", pd[1]);
    
    // pd값을 증가시키면 arr2 배열의 다음 인덱스값 주소를 가리키는 포인터 변수가 된다.  
    printf("\n");
    printf("%p", pd);
    printf("\n");
    printf("%f", pd[1]);
    printf("\n");
    pd++;
    printf("%p", pd);
    printf("\n");
    printf("%f", pd[1]);

    return 0;
}