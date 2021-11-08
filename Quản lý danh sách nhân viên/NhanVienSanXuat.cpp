#include "NhanVienSanXuat.h"

void NhanVienSanXuat::nhap()
{
    NhanVien::nhap();
    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;
    cout << "Nhap so ngay lam viec: ";
    cin >> soNgayLamViec;
}

void NhanVienSanXuat::xuat()
{
    NhanVien::xuat();
    cout << "\nLuong co ban: " << size_t(luongCoBan);
    cout << "\nSo ngay lam viec: " << soNgayLamViec;
}

long NhanVienSanXuat::tinhLuong()
{
    return (luongCoBan*soNgayLamViec);
}

NhanVienSanXuat::NhanVienSanXuat()
{
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}
