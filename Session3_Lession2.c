#include <stdio.h>

int main() {
    float celsius, fahrenheit;  // Khai bao bien de luu nhiet do Celsius va Fahrenheit

    // Yeu cau nguuoi dung nhap nhiet do theo do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);  // Doc gia tri nhiet do tu nguoi dung

    // Chuyen doi tu Celsius sang Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Hien thi ket qua
    printf("%.2f do Celsius tuong duong %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}