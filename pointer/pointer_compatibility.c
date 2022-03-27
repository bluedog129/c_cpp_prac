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

    pt = ar1;

    for (int i =0; i <6; ++i) {
        printf("%d ", *(pt+i));
    }
 
    pt = &ar1[0][0];
    pt = ar1[0];

    pa = ar1;


}