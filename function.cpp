#include<stdio.h>
#include<string.h>
int age;
char name[20];

void getData(void) {
    // printf("Enter your name: ");
    // fflush(stdin); // Clear input buffer before using gets
    // fgets(name, sizeof(name), stdin);
    printf("Enter your age: \n");
    scanf("%d", &age);
}
void displayData(void) {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
}

int testFunction(int a, int b) {
    int sum = a + b;
    return sum;
}

int main (){
    getData();
    displayData();
    testFunction(5, 10);
    return  0;
}

