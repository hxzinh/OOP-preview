#include <bits/stdc++.h>
#pragma once
using namespace std;

class KhachHang {
private:
    string hoTen;
    string soCMND;
    int soThang; // Số tháng đăng ký
    bool thuePT; // Có thuê PT hay không

public:
    KhachHang(string hoTen, string soCMND, int soThang, bool thuePT)
        : hoTen(hoTen), soCMND(soCMND), soThang(soThang), thuePT(thuePT) {}

    virtual double TinhChiPhi() const = 0; // Phương thức ảo tính chi phí
    virtual void XuatThongTin() const {
        cout << "\tHo ten: " << hoTen << endl;
        cout << "\tSo CMND: " << soCMND << endl;
        cout << "\tSo thang dang ky: " << soThang << endl;
        cout << "\tThue PT: ";
        if (thuePT) {
            cout << "Co" << endl;
        } else {
            cout << "Khong" << endl;
        }
    }

    int getSoThang() const { return soThang; }
    bool getThuePT() const { return thuePT; }

    virtual ~KhachHang() {}
};

