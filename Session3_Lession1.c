#include <stdio.h>

int main() {
    char name[100];  // Mang de luu ten nguoi dung

    // Yeu cau nguoi dung nhap ten
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);  // Doc ten nguoi dung, su dung fgets de doc ca khoang trang

    // In ra thong bao chao mung voi ten da nhap
    printf("Xin chao %s", name);  // In ra ten nguoi dung

    return 0;
}