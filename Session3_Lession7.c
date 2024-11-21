#include <stdio.h>

int main() {
    int so, tong = 0;

    // Yeu cau nguoi dung nhap vao mot so nguyen co 4 chu so
    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Kiem tra so nhap vao co phai so nguyen co 4 chu so hay khong
    if (so < 1000 || so > 9999) {
        printf("So ban nhap khong phai la so nguyen co 4 chu so.\n");
        return 1;  // Ket thuc chuong trinh neu so khong hop le
    }

    // Tinh tong cac chu so cua so 
    while (so != 0) {
        tong += so % 10;  // Lay chu so cuoi cung va cong vao tong
        so /= 10;  // Loai bo chu so cuoi cung
    }

    // In tong cac chu so
    printf("Tong cac chu so cua so đa nhap la: %d\n", tong);

    return 0;
}
