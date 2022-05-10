#include <stdio.h>

int main() {
    char arr[6] = {"hello"};

    char* ptr;

    ptr = &arr[0];

    printf("%c", *(ptr+2));

    return 0;
}

