#include "NhanVienVanPhong.h"

void NhanVienVanPhong::nhap()
{
    NhanVien::nhap();
    cout << "Nhap so san pham: ";
    cin >> soSanPham;
    cout << "Nhap so tien cong 1 san pham: ";
    cin >> tienCong1SP;
}

void NhanVienVanPhong::xuat()
{
    NhanVien::xuat();
    cout << "\nSo san pham: " << soSanPham;
    cout << "\nTien cong 1SP: " << size_t(tienCong1SP);
}

long NhanVienVanPhong::tinhLuong()
{
    return soSanPham*tienCong1SP;
}

NhanVienVanPhong::NhanVienVanPhong()
{
}

NhanVienVanPhong::~NhanVienVanPhong()
{
}
