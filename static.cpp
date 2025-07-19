// Biến static quan trọng trong lập trình nhúng và khi pv hỏi rất nhiều
// Vùng cấp phát bộ nhớ của biến static sau khi thực hiện xong hàm thì nó vẫn giữ nguyên giá trị của nó, không bị giải phóng bộ nhớ như biến cục bộ thông thường. Biến static được sử dụng để lưu trữ dữ liệu cần thiết trong suốt quá trình thực thi của chương trình.
// sử dụng biến đó để thực hiện các phép toán với bit.
// Biến static khá giống với biến toàn cục, nhưng nó chỉ có thể được truy cập trong phạm vi của file mà nó được khai báo. Điều này giúp tránh xung đột tên biến khi có nhiều file trong cùng một dự án.
#include<stdio.h>
#include<string>
#include<time.h>
void delay(int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds * (CLOCKS_PER_SEC / 1000));
}


void printfchanle(void){
    static int count = 0;
    count = 1- count;
    if(count == 1){
        printf("Chan le: Chan\n");
    } else { 
        printf("Chan le: Le\n");
}
}


int main(){
    while(1){
      printfchanle();
      delay(1000); // Delay 1 giây
      // Hàm printfchanle sẽ in ra "Chan" hoặc "Le" mỗi giây một lần
      // Biến static count sẽ giữ nguyên giá trị của nó giữa các lần gọi hàm

    }
    return 0;
}