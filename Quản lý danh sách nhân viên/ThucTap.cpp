#include "ThucTap.h"

void ThucTap::nhap()
{
    NhanVien::nhap();
    cout << "Nhap luong co ban thuc tap: ";
    cin >> luongThucTap;
    cout << "So gio day: ";
    cin >> soGioDay;
}

void ThucTap::xuat()
{
    NhanVien::xuat();
    cout << "\nLuong thuc tap co ban: " << size_t(luongThucTap);
    cout << "\nSo gio day: " << soGioDay;
}

long ThucTap::tinhLuong()
{
    return (luongThucTap*soGioDay);
}

ThucTap::ThucTap()
{
}

ThucTap::~ThucTap()
{
}
