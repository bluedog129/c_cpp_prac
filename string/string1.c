#include <stdio.h>

#define MESSSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main() {
    char words[MAXLENGTH] = "A string in an array";
    const char* pt1 = "A pointer to a string.";

    puts("Puts() adds a newline at the end");
    puts(MESSSAGE);
    puts(pt1);
    words[3] = 'p'; // ok
    puts(words);

    char greeting[50] = "Hello, and" "How are" "you" "today!";
    
    
}