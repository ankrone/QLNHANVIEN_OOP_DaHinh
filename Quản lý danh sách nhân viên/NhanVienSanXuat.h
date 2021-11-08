#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class NhanVienSanXuat: public NhanVien
{
private:
	float luongCoBan{};
	int soNgayLamViec{};
public:
	void nhap();
	void xuat();
	long tinhLuong();
	NhanVienSanXuat();
	~NhanVienSanXuat();
};

