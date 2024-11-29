#include "NhomA.h"
#include "NhomB.h"
#include "NhomAB.h"
#include "NhomO.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//-----------Cau 1-----------
	//Nhap so luong nguoi n
	int n;
	cout << "Nhap so luong nguoi: "; cin >> n; cin.ignore();
	//Khoi tao danh sach nhom mau
	NhomMau** Nguoi = new NhomMau * [n];
	cout << "-----NHAP NHOM MAU-----\n";
	cout << "Luu y: Nhom mau la mot trong cac nhom A, B, AB hoac O\n";
	//Nhap nhom mau tung nguoi
	for (int i = 0; i < n; i++)
	{
		string nm;
		do
		{
			cout << "Nhap nhom mau nguoi thu " << i + 1 << ": "; getline(cin, nm);
			//Kiem tra hop le nhom mau
			if (nm != "A" && nm != "B" && nm != "AB" && nm != "O") 
				cout << "Nhom mau khong hop le! Nhap lai!\n";
		} while (nm != "A" && nm != "B" && nm != "AB" && nm != "O");
		//Khoi tao theo nhom mau da nhap
		if (nm == "A")
			Nguoi[i] = new NhomA();
		else if (nm == "B")
			Nguoi[i] = new NhomB();
		else if (nm == "AB")
			Nguoi[i] = new NhomAB();
		else Nguoi[i] = new NhomO();
		//Nhap Rhesus
		Nguoi[i]->Nhap(); cin.ignore();
	}
	//-----------Cau 2-----------
	string Cha, Me, Con;
	//Nhap nhom mau cha, me, con
	cout << "Nhap nhom mau nguoi cha: "; getline(cin, Cha);
	cout << "Nhap nhom mau nguoi me: "; getline(cin, Me);
	cout << "Nhap nhom mau nguoi con: "; getline(cin, Con);
	//Khoi tao nhom mau nguoi cha theo nhom mau da nhap
	NhomMau* NguoiCha;
	if (Cha == "A")
		NguoiCha = new NhomA();
	else if (Cha == "B")
		NguoiCha = new NhomB();
	else if (Cha == "AB")
		NguoiCha = new NhomAB();
	else NguoiCha = new NhomO();
	//Kiem tra hop le di truyen giua nguoi cha, me va con
	if (NguoiCha->DiTruyen(Me, Con))
		cout << "Phu hop voi quy luat di truyen\n";
	else cout << "Khong phu hop voi quy luat di truyen\n";
	//-----------Cau 3-----------
	int x; bool ok = false;
	do
	{	//Nhap x, danh so tu 1
		cout << "Nhap x (Thu tu danh so tu 1): "; cin >> x;
		//Kiem tra x co nam trong khoang 1 - n khong
		if (x < 1 || x > n) cout << "Vuot qua thu tu! Nhap lai!\n";
	} while (x < 1 || x > n);
	//In ra danh sach nguoi co the truyen mau cho nguoi thu x
	cout << "---Danh sach nguoi co the truyen mau cho nguoi thu " << x << " co nhom mau " << Nguoi[x - 1]->GetNhomMau() << Nguoi[x - 1]->GetRh() << " ---\n";
	for (int i = 0; i < n; i++)
		//Kiem tra tuong thich nhom mau
		if (i != x - 1 && Nguoi[x - 1]->TuongThich(Nguoi[i]->GetNhomMau(), Nguoi[i]->GetRh()))
		{
			cout << "Nguoi thu " << i + 1 << ", nhom mau " << Nguoi[i]->GetNhomMau() << Nguoi[i]->GetRh() << "\n";
			ok = true;	//Da tim thay it nhat 1 nguoi
		}
	//Thong bao khong tim thay
	if (!ok) cout << "Khong tim thay!";
	return 0;
}