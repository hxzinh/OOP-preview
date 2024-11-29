#pragma once
#include "NhomMau.h"
#include <string>
using namespace std;
class NhomB : public NhomMau
{
public:
	//Constructor khoi tao nhom mau B
	NhomB();
	//Phong thuc Get nhom mau B
	string GetNhomMau();
	//Phuong thuc kiem tra hop le di truyen
	bool DiTruyen(string me, string con);
	//Phuong thuc kiem tra tuong thich mau cho - nhan
	bool TuongThich(string NguoiCho, char RH);
};