#include <stdio.h>

int main() {
  float toan, van, anh; // khai bao cac bien de luu diem mon toan, van, anh
  float tongDiem, diemTrungBinh; // khai bao cac bien de luu tong diem va diemTrungBinh
  
  // yeu cau nguoi dung nhap diem cua 3 mon
  printf ("nhap diem mon toan: ");
  scanf("%f", &toan); // doc diem mon toan
 
  
  printf("Nhap diem mon Van: ");
  scanf("%f", &van);  // Doc diem mon Van


  printf("Nhap diem mon Anh: ");
  scanf("%f", &anh);  // Doc diem mon Anh


  // Tinh tong diem va diem trung binh
  tongDiem = toan + van + anh;
  diemTrungBinh = tongDiem / 3;


  // In ket qua tong diem va diem trung binh, moi gia tri chinh xac den 2 chu so thap phan
  printf("Tong diem: %.2f\n", tongDiem);
  printf("Diem trung binh: %.2f\n", diemTrungBinh);

  return 0;
}
