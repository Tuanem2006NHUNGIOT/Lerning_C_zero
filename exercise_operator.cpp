// task 1:  Viết chương trình set 1 bit ở vị trí bất kì trong 1 byte gồm 8bit:
// 8 bit được đánh số từ 0 đến 7, bit 0 là bit thấp nhất và bit 7 là bit cao nhất. Để set 1 bit ở vị trí bất kỳ, ta có thể sử dụng toán tử OR với một mặt nạ (mask) có bit tương ứng được đặt thành 1.
#include<stdio.h>
#include<string>
int main(){
    unsigned char byte = 0b11101110;
    unsigned char set_position = 4; // Vị trí bit cần set (0-7)
    unsigned char byte_fake = 1<<4; /* 0b00010000*/
    unsigned char result = byte | byte_fake; /*0b11111110*/
    printf("Set bit 1: %d\n", result);

// task 2: Viết chương trình clear 1 bit ở vị trí bất kỳ trong 1 byte gồm 8 bit:
// Để clear 1 bit ở vị trí bất kỳ, ta có thể sử dụng toán tử AND với một mặt nạ (mask) có bit tương ứng được đặt thành 0.
// Clear bit thứ 2 trong byte về 0:
    unsigned char byte2 = 0b00100101;
    unsigned char clear_bit = 0b11100001;
    unsigned char clear_bit_finish = byte2 & clear_bit; /*0b00100001*/
    printf("Clear bit 2: %d\n", clear_bit_finish);
    // task 3: Viết chương trình toggle 1 bit ở vị trí bất kỳ trong 1 byte gồm 8 bit:
// Để toggle (đảo ngược) 1 bit ở vị trí bất kỳ,
// ta có thể sử dụng toán tử XOR với một mặt nạ (mask) có bit tương ứng được đặt thành 1.
    unsigned char toggle_bit = byte ^ (1<<4);  /* Dùng phép Xor*/
    printf("Toggle bit 4: %d\n", toggle_bit); // Kết quả sau khi toggle
    return 0;
}