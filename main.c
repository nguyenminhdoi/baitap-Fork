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
void nhapDanhSach(SinhVien ds[], int n);
}

// Ham xuat danh sach sinh vien ra man hinh
void xuatDanhSach(SinhVien ds[], int n);

// Ham tim va tra ve sinh vien co diem trung binh cao nhat
SinhVien timMaxDiemTB(SinhVien ds[], int n);

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
