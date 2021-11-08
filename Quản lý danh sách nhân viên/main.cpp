#include <iostream>
#include "CongTy.h"
using namespace std;
int main()
{
    CongTy* CT = new CongTy;
    CT->nhap();
    CT->xuat();
    delete CT;
    system("pause");
    return 0;
}
