#include<stdio.h>
#include<stdlib.h>

void giamdonvi(int *var){
    *var = *var - 1; // Giảm giá trị của biến var đi 1
//     var: Địa chỉ của biến được truyền vào
//     *var: Giá trị của biến được truyền vào
}

int main() {
    int x =100;
    printf("Gia tri truoc: %d\n", x);
    giamdonvi(&x);
    printf("Gia tri sau: %d\n", x);
    return 0;
}
//  Sự khác nhau của truyền vào tham trị và truyền vào tham chiếu:
// Truyền vào tham trị: Chỉ truyền giá trị của biến, không thay đổi giá trị của biến gốc.
// Truyền vào tham chiếu: Truyền địa chỉ của biến, có thể thay đổi giá trị của biến gốc.
// Ví dụ của truyền vào tham trị:
void thamtri(){
    int a = 10;
    int b = 20;
    swap(a, b); // Chỉ truyền giá trị của a và b
    printf("a: %d, b: %d\n", a, b); // a vẫn là 10, b vẫn là 20
}
// Ví dụ của truyền vào tham chiếu:
void thamchieu(){
    int a = 10;
    int b = 20;
    swap(&a, &b); // Truyền địa chỉ của a và b
    printf("a: %d, b: %d\n", a, b); // a là 20, b là 10
}
