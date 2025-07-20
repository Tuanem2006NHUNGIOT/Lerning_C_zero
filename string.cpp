#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// char a ='a';
// "ABCD" 'Levantuanem
// Có 2 cách khai báo chuỗi trong C:
// char str1[] = "Hello"; // Chuỗi ký tự
// char str2* = "World"; // Con trỏ đến chuỗi ký tự
int main(){
// Khai báo bằng kiểu con trỏ 
    char  *c= "Levantuanem";
    c ="ABC"; // Chỉ có thể gán lại địa chỉ mới, không thể thay đổi nội dung chuỗi
    printf("Chuoi con tro: %s\n", c);
// Khai báo bằng mảng ký tự
    char str[]= "lEVANTUANEM";
    str[0] = 'A'; // Có thể thay đổi nội dung chuỗi
    str[1] = 'E';
    str[2] = 'M';
    str[3] = 'A';
    str[4] = 'N';
    str[5] = 'T';
    printf("Chuoi khai bao boi mang: %s", str);
    int dodai = strlen(str); // Hàm strlen để tính độ dài chuỗi
    printf("\nDo dai chuoi: %d\n", dodai);
    int sosanh = strcmp(c, str); // Hàm strcmp để so sánh chuỗi
    printf("So sanh chuoi: %d\n", sosanh); // Hàm strcmp để so sánh chuỗi
        if (sosanh >0){
        printf("c> str ");
    }
        else{
            printf("str> c");
    }
    strcpy(str, c); // Hàm strcpy để sao chép chuỗi
    printf("\nChuoi sau khi sao chep: %s\n", str);
    strcpy(&str[3], c);
    printf("Chuoi sau khi sao chep tu vi tri 3: %s\n", str);
    strcat(str, c); // Hàm strcat để nối chuỗi
    printf("Chuoi sau khi noi: %s\n", str);
    char s1[20] = "Hello IOT";
    char s2[20] = "IOT";
    strstr(s1,s2); // Hàm strstr để tìm chuỗi con trong chuỗi mẹ
    printf("Chuoi con: %s\n", strstr(s1,s2)); // In ra chuỗi con tìm được
    // Hàm strtok để tách chuỗi theo dấu phân cách
    char s3[] ="08/06/2006";
    char ngay[3];
    char thang[3];
    char nam[5];
    char *token = strtok(s3, "/");
    if (token != NULL) {
        strcpy(ngay, token);
        token = strtok(NULL, "/"); 
    }
    if (token != NULL) {
        strcpy(thang, token);
        token = strtok(NULL, "/");
    }
    if (token != NULL) {
        strcpy(nam, token);
    }
    printf("Ngay: %s, Thang: %s, Nam: %s\n", ngay, thang, nam);
    return 0;
} 