#include<stdio.h>
#include<stdlib.h>
int main() {
    unsigned char a = 100;
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %d\n", &a); /*Địa chỉ của a trong RAM*/ 
    return 0;
}