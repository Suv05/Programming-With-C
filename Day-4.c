#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;
    char ch = 'A';
    char str[] = "Hello, World!";
    
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", pi);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Hexadecimal: %x\n", num);
    printf("Pointer: %p\n", (void*)&num);
    return 0;
}
