#include "NhomAB.h"
#include <string>
using namespace std;
//Constructor khoi tao nhom mau AB
NhomAB::NhomAB() {}
//Phuong thuc Get nhom mau AB
string NhomAB::GetNhomMau()
{	//Tra ve nhom mau AB
	return "AB";
}
//Phuong thuc kiem tra hop le di truyen, voi bo la nhom AB
bool NhomAB::DiTruyen(string me, string con)
{
	//Me A thi con A, B hoac AB
	if (me == "A" && (con != "O")) return true;
	//Me B thi con A, B hoac AB
	if (me == "B" && (con != "O")) return true;
	//Me AB thi con A, B hoac AB
	if (me == "AB" && (con != "O")) return true;
	//Me O thi con A hoac B
	if (me == "O" && (con == "A" || con == "B")) return true;
	return false;
}
//Phuong thuc kiem tra tuong thich mau cho - nhan, voi nguoi nhan la nhom AB
bool NhomAB::TuongThich(string NguoiCho, char RH)
{
	//Neu nguoi nhan mau AB+ thi nhan duoc tat ca nhom mau
	if (GetRh() == '+') return true;
	//Neu nguoi nhan mau AB- thi nhan duoc nhom mau Rh-
	if (GetRh() == '-')
		if (RH == '-') return true;
	return false;
}