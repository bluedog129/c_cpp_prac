#include <stdio.h>
#define TEST "A string from #define"

void custom_put(const char* str);
int custom_put2(const char* str);

int main() {
    char str[60] = "String array initialized";
    const char* ptr = "A pointer initialized";

    puts("String without \\n");
    puts("END");   
    puts(TEST);
    puts(TEST + 5);
    puts(&str[3]);

    puts(ptr + 3);

    //char str[] = {'H', 'I', '!'};
    //puts(str);

    char line[100];
    while (gets(line))
        puts(line);

    

}