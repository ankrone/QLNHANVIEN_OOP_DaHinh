#pragma once
#include <string>
using namespace std;

class NhanVien
{
protected:
	string hoTen;
	float luong{};
public:
	virtual void nhap();
	virtual void xuat();
	virtual long tinhLuong();
	NhanVien();
	~NhanVien();
};

