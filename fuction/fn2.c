#include <stdio.h>

int main() {
    double arr1[5] = {10, 13, 12, 7, 8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};

    printf("Address = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1));

    double avg = 0.0;
    for (int i = 0; i<5; ++i) {
        avg += arr1[i];
    }
    avg /= (double)5;

    printf("Avg = %f\n", avg);

    

}