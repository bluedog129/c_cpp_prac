#include <stdio.h>

int main() {
    int n = 5;
    double x;
    x = n;
    int* p1 = &n;
    double* pd = &x;
    // pd = p1; // warning

    int* pt;
    int (*pa)[3];
    int ar1[2][3] = { 3, };
    int ar2[3][2] = { 7, };
    int** p2;

    pt = &ar1[0][0]; // pointer - to - int
    pt = ar1[0]; // pointer - to - int

    // pt = ar1; // warning (Error = 이차원 배열 자체를 포인터 변수에 넣을 수 없다.)

    pa = ar1;  // pointer - to - int[3]
    // pa = ar2;  // warning (Error = int[3] 배열의 주소를 넣는 포인터에 int[2]배열 크기의 주소를 넣으려 했기 때문)

    for (int i =0; i <6; ++i) {
        printf("%d ", *(pt+i));
    }
 
    pt = &ar1[0][0];
    pt = ar1[0];

    pa = ar2;

    p2 = &pt;
    *p2 = ar2[0];
    p2 = ar2;



    return 0;
}