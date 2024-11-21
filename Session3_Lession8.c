#include <stdio.h>

int main() {
    int so, nghichDao = 0;

    // Yeu cau nguoi dung nhap vao mot so nguyen co 4 chu so
    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Kiem tra so nhap vao co phai so 4 chu hay khong
    if (so < 1000 || so > 9999) {
        printf("So ban nhap khong phai la so nguyen co 4 chu so.\n");
        return 1;  // Ket thuc chuong trinh neu so khong hop le
    }

    // Tinh so nghichDao 
    while (so != 0) {
        nghichDao = nghichDao * 10 + so % 10;  // Lay chu so cuoi cung va tao so nghichDao
        so /= 10;  // Loai bo chu so cuoi cung
    }

    // In ra so nghichDao
    printf("So nghichDao cua so da nhap la: %d\n", nghichDao);

    return 0;
}
