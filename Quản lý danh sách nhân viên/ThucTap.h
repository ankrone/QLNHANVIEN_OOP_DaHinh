#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class ThucTap: public NhanVien
{
private:
	float luongThucTap{};
	int soGioDay{};
public:
	void nhap();
	void xuat();
	long tinhLuong();
	ThucTap();
	~ThucTap();
};

