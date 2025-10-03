#include <stdio.h>
int main() {
    char s[] = "Hello, World!";
    int i = 0;
    do {
        putchar(s[i]);
    } while(s[++i]);
    return 0;
}
