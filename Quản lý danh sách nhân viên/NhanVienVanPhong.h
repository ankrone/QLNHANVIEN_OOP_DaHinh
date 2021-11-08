#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class NhanVienVanPhong: public NhanVien
{
private:
	int soSanPham{};
	float tienCong1SP{};
public:
	void nhap();
	void xuat();
	long tinhLuong();
	NhanVienVanPhong();
	~NhanVienVanPhong();
};

