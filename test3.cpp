#include<stdio.h>
#include<stdlib.h>
int main() {
    unsigned char a = 100;
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %d\n", &a); /*Địa chỉ của a trong RAM*/ 
    int b = 200;
    printf("Gia tri cua b: %d\n", b);
    printf("Dia chi cua b: %d\n", &b); /*Địa chỉ của b trong RAM*/
    float c = 3.14;
    printf ("Gia tri cua c: %.2f\n", c);
    printf("Dia chi cua c: %d\n", &c); /*Địa chỉ của c trong RAM*/
    return 0;
}