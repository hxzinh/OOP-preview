#include <bits/stdc++.h>
#include "KhachHang.h"
#include "NonMember.h"
#include "Premium.h"
#include "Basic.h"
using namespace std;

void NhapDanhSachKhachHang(vector<KhachHang*> &DanhSachKhanhHang)
{
    int n;
    cout << "Nhap so luong khach hang: "; cin >> n;

    for(int i = 0;i < n; i++)
    {
         cout << "\nNhap thong tin khach hang thu " << i + 1 << ":" << endl;
        string hoTen, soCMND;
        int soThang, loaiGoi, dkLopHoc;
        bool thuePT;

        cout << "Ho ten: ";
        cin.ignore(); getline(cin, hoTen);

        cout << "So CMND: "; cin >> soCMND;
        cout << "So thang dang ky: "; cin >> soThang;

        cout << "Chon goi dich vu (1: Premium, 2: Basic, 3: Non-member): ";
        cin >> loaiGoi;

        cout << "Co thue PT hay khong (1: Co, 0: Khong): "; cin >> thuePT;

        if(loaiGoi == 1 || loaiGoi == 2) 
        {
            cout << "Dang ky lop hoc (1: Co, 0: Khong): "; cin >> dkLopHoc;
        }

        if (loaiGoi == 1) {
            DanhSachKhanhHang.push_back(new Premium(hoTen, soCMND, soThang, thuePT));
        } else if (loaiGoi == 2) {
            DanhSachKhanhHang.push_back(new Basic(hoTen, soCMND, soThang, thuePT, dkLopHoc));
        } else {
            DanhSachKhanhHang.push_back(new NonMember(hoTen, soCMND, soThang, thuePT));
        }
    }
}

void XuatDanhSachKhachHang(const vector<KhachHang*> &DanhSachKhanhHang)
{
    for(int i = 0; i < DanhSachKhanhHang.size(); i++)
    {
        cout << "\nThong tin khach hang thu " << i + 1 << ":" << endl;
        DanhSachKhanhHang[i]->XuatThongTin();
    }
}

void KhachHangCoChiPhiCaoNhat(const vector<KhachHang*> &DanhSachKhanhHang)
{
    double maxChiPhi = DanhSachKhanhHang[0]->TinhChiPhi();

    for(int i = 1; i < DanhSachKhanhHang.size(); i++)
        if(DanhSachKhanhHang[i]->TinhChiPhi() > maxChiPhi)
            maxChiPhi = DanhSachKhanhHang[i]->TinhChiPhi();

    cout << "\nDanh sach khach hang co chi phi cao nhat la: " << endl;
        for(int i = 0; i < DanhSachKhanhHang.size(); i++)
        if(DanhSachKhanhHang[i]->TinhChiPhi() == maxChiPhi)
        {
            DanhSachKhanhHang[i]->XuatThongTin();   
            cout <<"\n============\n";
        }
}

int main() {
    vector<KhachHang*> DanhSachKhanhHang;
    
    NhapDanhSachKhachHang(DanhSachKhanhHang);
    XuatDanhSachKhachHang(DanhSachKhanhHang);
    KhachHangCoChiPhiCaoNhat(DanhSachKhanhHang);
    
    return 0;
}