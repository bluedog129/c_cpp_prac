#include <stdio.h>

int main() {
    const char* mythings[5] = {
        "Dancing in the rain",
        "Couting apples",
        "Whtching movies with friends",
        "Writing sad letters",
        "Studying the C language"
    };

    char yourthings[5][40] = {
        "Studing the C++ language",
        "Eating",
        "Walking around till dark",
        "Deleting spam emails"
    };

    const char* temp1 = "Dancing in the rain";
    const char* temp2 = "Studying the C++ language";

    printf("%s \n", mythings[0]);
    printf("%s \n", yourthings[0]);

    for (int i = 0; i<100; i++) {
        printf("%c", mythings[0][i]);
    }
    printf("\n");
    
    for (int i = 0; i<100; i++) {
        printf("%c", yourthings[0][i]);
    }
    printf("\n");

    return 0;
}