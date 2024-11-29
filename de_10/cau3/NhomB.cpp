#include "NhomB.h"
#include <string>
using namespace std;
//Constructor khoi tao nhom mau B
NhomB::NhomB() {}
//Phuong thuc Get nhom mau B
string NhomB::GetNhomMau()
{	//Tra ve nhom mau B
	return "B";
}
//Phuong thuc kiem tra hop le di truyen, voi bo la nhom B
bool NhomB::DiTruyen(string me, string con)
{
	//Me A thi con A, B, AB hoac O
	if (me == "A") return true;
	//Me B thi con B hoac O
	if (me == "B" && (con == "B" || con == "O")) return true;
	//Me AB thi con A, B hoac AB
	if (me == "AB" && (con != "O")) return true;
	//Me O thi con B hoac O
	if (me == "O" && (con == "B" || con == "O")) return true;
	return false;
}
//Phuong thuc kiem tra tuong thich mau cho - nhan, voi nguoi nhan la nhom B
bool NhomB::TuongThich(string NguoiCho, char RH)
{
	//Neu nguoi nhan mau B+
	if (GetRh() == '+')
		//Nhan mau B+, B-, O+ hoac O-
		if (NguoiCho == "B" || NguoiCho == "O") return true;
	//Neu nguoi nhan mau B-
	if (GetRh() == '-')
		//Nhan mau B- hoac O-
		if (RH == '-' && (NguoiCho == "B" || NguoiCho == "O")) return true;
	return false;
}