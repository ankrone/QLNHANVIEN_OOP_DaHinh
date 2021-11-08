#include "NhanVien.h"
#include <iostream>

void NhanVien::nhap()
{
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

}

void NhanVien::xuat()
{
    cout << "\nHo va ten: " << hoTen;
}

long NhanVien::tinhLuong()
{
    return 0;
}

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}
