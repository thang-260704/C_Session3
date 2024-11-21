#include <stdio.h>
#include <math.h>  // Thu vien toan hoc de su dung Pi

int main() {
    float r, chuVi, dienTich;  // Khai bao bien ban kinh, chu vi va dien tich

    // Yeu cau nguoi dung nhap ban kinh
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);  // Doc gia tri ban kinh tu ban phim

    // Tinh chu vi va dien Tich
    chuVi = 2 * M_PI * r;  // Cong thuc tinh chu vi
    dienTich = M_PI * r * r;  // Cong thuc tinh dien tich

    // In ket qua voi 2 chu so thap phan
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}
