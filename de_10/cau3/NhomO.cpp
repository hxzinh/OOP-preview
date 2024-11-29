#include "NhomO.h"
#include <string>
using namespace std;
//Constructor khoi tao nhom mau O
NhomO::NhomO() {}
//Phuong thuc Get nhom mau O
string NhomO::GetNhomMau()
{	//Tra ve nhom mau O
	return "O";
}
//Phuong thuc kiem tra hop le di truyen, voi bo la nhom O
bool NhomO::DiTruyen(string me, string con)
{
	//Me A thi con A hoac O
	if (me == "A" && (con == "A" || con == "O")) return true;
	//Me B thi con B hoac O
	if (me == "B" && (con == "B" || con == "O")) return true;
	//Me AB thi con A hoac B
	if (me == "AB" && (con == "A" || con == "B")) return true;
	//Me O thi con O
	if (me == "O" && con == "O") return true;
	return false;
}
//Phuong thuc kiem tra tuong thich mau cho - nhan, voi nguoi nhan la nhom O
bool NhomO::TuongThich(string NguoiCho, char RH)
{
	//Neu nguoi nhan mau O+
	if (GetRh() == '+')
		//Nhan mau O+ hoac O-
		if (NguoiCho == "O") return true;
	//Neu nguoi nhan mau O-
	if (GetRh() == '-')
		//Nhan mau O-
		if (RH == '-' && NguoiCho == "O") return true;
	return false;
}