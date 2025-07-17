//  Toán tử trong C: And Or Not Xor 
 #include<stdio.h>
 #include<string>
 int main(){
    unsigned char x = 0b1100110;
    unsigned char y = 0b0110110;
    unsigned char and_result = x & y;
    unsigned char or_result = x|y;
    unsigned char not_result = !x;
    unsigned char xor_result = x^y;
    // phép dịch trái shift left 
    unsigned char left = x << 2; // Dịch trái 2 bit
    // phép dịch phải shift right
    int right = x >> 2; // Dịch phải 2 bit
    printf("Left Shift: %d\n", left);   // Kết quả dịch trái
    printf("Right Shift: %d\n", right); // Kết quả dịch phải
    printf("AND: %d\n", and_result); // Kết quả AND
    printf("OR: %d\n", or_result);   // Kết quả OR          
    printf("NOT: %d\n", not_result); // Kết quả NOT
    printf("XOR: %d\n", xor_result); // Kết quả XOR
    return 0;
}
// Đối với số dương,, khi dịch phải t thay bằng số 0, còn đối với số âm thì ta thay bằng số 1 
// Nếu không khai báo unsigned char mà khai báo bằng int, char, short thì khi đó số bit đầu tiên sau 0b nếu là 0 sẽ là số dương còn nếu là 1 thì sẽ là số âm