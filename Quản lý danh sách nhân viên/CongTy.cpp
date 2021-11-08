#include "CongTy.h"

void CongTy::nhap()
{
	int choice;
	NhanVien* NV = new NhanVien;
	do{
		cout << "\n1. Nhan Vien San Xuat";
		cout << "\n2. Nhan Vien Van Phong";
		cout << "\n3. Nhan Vien Thuc Tap" << endl;
		cout << "\n0. Thoat va in danh sach";
		do {
			cout << "\nNhap lua chon: ";
			cin >> choice;
			if (choice < 0 || choice > 3) {
				cout << "\nLua chon khong hop le. Vui long kiem tra lai!";
			}
		} while (choice < 0 || choice > 3);
		if (choice == 1) {
			NV = new NhanVienSanXuat;
		}
		else if (choice == 2) {
			NV = new NhanVienVanPhong;
		}
		else if (choice == 3) {
			NV = new ThucTap;
		}
		if (choice != 0) {
			NV->nhap();
			list.push_back(NV);
		}
	} while (choice != 0);
}

void CongTy::xuat()
{
	int pos = list.size();
	for (int i = 0; i < pos; i++) {
		cout << "\nThong tin nhan vien thu: " << i + 1;
		list[i]->xuat();
		cout << "\n--> Tien luong: " << size_t(list[i]->tinhLuong()) << "VND" << endl;
	}
}
CongTy::CongTy()
{
}

CongTy::~CongTy()
{
}
