#include<stdio.h>
int main() {
  // Khai bao bien
  float canhDay, chieuCao, dienTich;
  // Yeu cau nguoi dung nhap vao chieu dai canhDay va chieuCao
  printf("nhap do dai canhDay cua tam giac: ");
  scanf("%f", &canhDay) ;
  printf("nhap chieuCao cua tam giac: ");
  scanf("%f", &chieuCao);
  // Tinh dienTich cua tam giac
  dienTich = 0.5 * canhDay * chieuCao;
  // In ra dienTich tam giac voi 2 chu so thap phan
  printf("dienTich cua tam giac la: %.2f\n", dienTich);
  return 0;
}