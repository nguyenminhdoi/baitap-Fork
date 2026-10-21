#include <stdio.h>
#include <string.h>

#define SO_LUONG_SV 3

// 1. Khai bao cau truc SinhVien
typedef struct
{
  char maSV[20];
  char hoTen[50];
  float diemTB;
} SinhVien;

// Ham nhap thong tin danh sach sinh vien
void nhapDanhSach(SinhVien ds[], int n) {
    printf("=== NHAP THONG TIN %d SINH VIEN ===\n", n);
    for(int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
       
        printf("Nhap ma sinh vien: ");
        scanf("%s", ds[i].maSV);
       
        // Xoa bo nho dem de tranh bi troi lenh khi nhap chuoi co khoang trang
        while(getchar() != '\n');
       
        printf("Nhap ho ten: ");
        fgets(ds[i].hoTen, sizeof(ds[i].hoTen), stdin);
        ds[i].hoTen[strcspn(ds[i].hoTen, "\n")] = '\0'; // Xoa ky tu xuong dong do fgets nhan vao
       
        printf("Nhap diem trung binh: ");
        scanf("%f", &ds[i].diemTB);
    }
}

// Ham xuat danh sach sinh vien ra man hinh
void xuatDanhSach(SinhVien ds[], int n) {
    printf("\n=== DANH SACH SINH VIEN ===\n");
    printf("%-15s %-25s %-10s\n", "Ma SV", "Ho ten", "Diem TB");
    for(int i = 0; i < n; i++) {
        printf("%-15s %-25s %-10.2f\n", ds[i].maSV, ds[i].hoTen, ds[i].diemTB);
    }
}
// Ham tim va tra ve sinh vien co diem trung binh cao nhat
SinhVien timMaxDiemTB(SinhVien ds[], int n){
   int max = 0;

    for (int i = 1; i < n; i++) {
        if (ds[i].diemTB > ds[max].diemTB) {
            max = i;
        }
    }

    return ds[max];
}


// 5. Ham main goi cac ham tren de thuc thi chuong trinh
int main()
{
  // Khoi tao mang chua danh sach sinh vien
  SinhVien ds[SO_LUONG_SV];

  // Goi ham nhap danh sach
  nhapDanhSach(ds, SO_LUONG_SV);

  // Goi ham xuat danh sach
  xuatDanhSach(ds, SO_LUONG_SV);

  // Goi ham tim sinh vien cao diem nhat va in ket qua

  return 0;
}
