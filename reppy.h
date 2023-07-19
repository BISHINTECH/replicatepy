#include <stdio.h>





void print(const char x[]) {
    printf("%s", x);
}

char* input(const char x[]) {
    static char string[200]; // Using 'static' to return the local array safely
    printf("%s", x);
    scanf("%199s", string); // Limiting input to 199 characters to avoid buffer overflow
    return string;
}
