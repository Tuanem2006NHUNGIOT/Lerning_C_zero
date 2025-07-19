#include<stdio.h>
#include<string>
int bientoancuc = 5;
int main(){ 
    bientoancuc++ ; // Gán giá trị mới cho biến toàn cục
    printf("Gia tri cua bien toan cuc: %d\n", bientoancuc); // In giá trị biến toàn cục
    return 0;
}


// Dưới đây là ví dụ về cách sử dụng từ khóa `extern` trong C++ để khai báo biến toàn cục:
// extern.cpp   
#include <stdio.h>
#include <string>
extern int bientoancuc; // Khai báo biến toàn cục từ file khác
int main() {
    bientoancuc-- ;
    printf("Gia tri cua bien toan cuc: %d\n", bientoancuc); // Sử dụng biến toàn cục
    return 0;
}
// Rồi khi đó ta có thể sủw dụng biến đó trong cấc file nhỏ khác 


// Khi xử dụng extern để khai báo biến toàn cục thì ta có thể sử dụng biến đó cho file khác trong cùng 1 forder đó 
// Ví dụ: extern.cpp là file chính, còn file con là exercise_operator.cpp
// Trong file extern.cpp ta sẽ khai báo biến toàn cục và trong file exercise_operator.cpp