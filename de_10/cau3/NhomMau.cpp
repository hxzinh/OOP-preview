#include "NhomMau.h"
#include <iostream>
using namespace std;
//Constructor khoi tao
NhomMau::NhomMau() {}
//Phuong thuc Nhap Rhesus
void NhomMau::Nhap()
{
	do
	{	//Nhap Rhesus
		cout << "Nhap Rhesus (+/-): "; cin >> Rh;
		//Kiem tra hop le cua Rhesus
		if (Rh != '+' && Rh != '-') cout << "Rhesus khong hop le! Nhap lai!\n";
	} while (Rh != '+' && Rh != '-');
	
}
//Phuong thuc Get Rhesus
char NhomMau::GetRh()
{
	//Tra ve Rhesus
	return Rh;
}