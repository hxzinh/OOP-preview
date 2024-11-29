#pragma once
#include <string>
using namespace std;
class NhomMau
{
protected:
	char Rh;	//Rhesus
public:
	//Constructor khoi tao
	NhomMau();
	//Phuong thuc Nhap Rhesus
	void Nhap();
	//Phuong thuc Get Rhesus
	char GetRh();
	//Phuong thuc thuan ao, lay nhom mau
	virtual string GetNhomMau() = 0;
	//Phuong thuc thuan ao, kiem tra hop le di truyen
	virtual bool DiTruyen(string me, string con) = 0;
	//Phuong thuc thuan ao, kiem tra tuong thich mau cho - nhan
	virtual bool TuongThich(string NguoiCho, char RH) = 0;
};