#include "NhomA.h"
#include <string>
using namespace std;
//Constructor khoi tao nhom mau A
NhomA::NhomA() {}
//Phuong thuc Get nhom mau A
string NhomA::GetNhomMau()
{	//Tra ve nhom mau A
	return "A";
}
//Phuong thuc kiem tra hop le di truyen, voi bo la nhom A
bool NhomA::DiTruyen(string me, string con)
{	
	//Me A thi con A hoac O
	if (me == "A" && (con == "A" || con == "O")) return true;
	//Me B thi con A, B, AB hoac O
	if (me == "B") return true;
	//Me AB thi con A, B hoac AB
	if (me == "AB" && (con != "O")) return true;
	//Me O thi con A hoac O
	if (me == "O" && (con == "A" || con == "O")) return true;
	return false;
}
//Phuong thuc kiem tra tuong thich mau cho - nhan, voi nguoi nhan la nhom A
bool NhomA::TuongThich(string NguoiCho, char RH)
{
	//Neu nguoi nhan mau A+
	if (GetRh() == '+')
		//Nhan mau A+, A-, O+ hoac O-
		if (NguoiCho == "A" || NguoiCho == "O") return true;
	//Neu nguoi nhan mau A+
	if (GetRh() == '-')
		//Nhan mau A- hoac O-
		if (RH == '-' && (NguoiCho == "A" || NguoiCho == "O")) return true;
	return false;
}