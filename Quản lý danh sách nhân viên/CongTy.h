#pragma once
#include "NhanVien.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include "ThucTap.h"
#include <iostream>
#include <vector>
using namespace std;
class CongTy:public NhanVien
{
private:
	vector<NhanVien*> list;
public:
	void nhap();
	void xuat();
	CongTy();
	~CongTy();
};

