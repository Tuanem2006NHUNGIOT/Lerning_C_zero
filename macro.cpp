//  Định nghĩa macro bằng lệnh #define 
// Hiểu đơn giản là " define pin 13" thì chỗ nào có pin sẽ thay thế bằng 13
#include <stdio.h>
#define pin 13 // Định nghĩa macro pin là 13
int main() {
    printf("Gia tri cua pin: %d\n", pin); // Sử dụng macro pin
    return 0;

// Khi lập trình như arduino or atm32 and esp32 thì hay dùng macro như bên dưới:
// define pin 13
// Dưới đây là ví dụ sử dụng macro trong Arduino trước khi tiền xử lý:
void setup(){
    pinMode(pin, OUTPUT); // Sử dụng macro pin
}


void loop() {
    digitalWrite(pin, HIGH); // Sử dụng macro pin
    delay(1000);
    digitalWrite(pin, LOW); // Sử dụng macro pin
    delay(1000);
}


// Khi tiền xử lý, macro pin sẽ được thay thế bằng giá trị 13
// Vì vậy, mã sẽ trở thành:
void setup() {
    pinMode(13, OUTPUT); // Sử dụng giá trị 13 thay vì macro pin
}       
void loop() {
    digitalWrite(13, HIGH); // Sử dụng giá trị 13 thay vì macro pin
    delay(1000);
    digitalWrite(13, LOW); // Sử dụng giá trị 13 thay vì macro pin
    delay(1000);
}
}

// Lưu ý là: define được khai báo bên ngoài hàm main()\

// Hoặc define có thể dùng cách khác:
// define cong(x,y) x+y  f

// phân biệt giữa scanf và gets: scanf nhập từ bàn phím không dùng dấu cách, còn get thì có thể cách, nói nôm na thì khi cần nhập số thì dùng scanf còn nếu nhập chuỗi có chứa khoảng trắng thì dùng gets 
/*ffflush(stdin);*/ // Xóa bộ đệm nhập khi  đùng gets thì trước đó nên dùng fflush() 