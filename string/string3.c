#include <stdio.h>
#define STRLEN 81

int main() {
    char name[128];
    int result = scanf("%s", name);

    char words[STRLEN] =  "";
    gets(words);

    printf("START\n");
    printf("%s", words);
    puts(words);
    puts("END.");

    return 0;
}