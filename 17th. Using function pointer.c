#include <stdio.h>
int main() {
    void (*fp)(const char*) = puts;
    fp("Hello, World!");
    return 0;
}
