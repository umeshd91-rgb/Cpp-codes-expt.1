#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);  
    printf("Hello Robotics, %s!\n", name);
    return 0;
}