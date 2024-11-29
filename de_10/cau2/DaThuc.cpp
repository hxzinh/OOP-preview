#include "DaThuc.h"
#include <iostream>
#include <vector>
//Constructor khoi tao
DaThuc::DaThuc(int bac) : n(bac) 
{
    //Thay doi kich co vector
    a.resize(n + 1, 0);
}
//Nap chong toan tu +
DaThuc DaThuc::operator + (const DaThuc& m)
{
    //Lay bac cua da thuc co bac lon hon
    int max_bac = max(n, m.n);
    DaThuc t(max_bac);
    //Cong da thuc theo bac vao t
    for (int i = 0; i <= max_bac; i++)
    {
        if (i <= n) t.a[i] += a[i];
        if (i <= m.n) t.a[i] += m.a[i];
    }
    return t;   //Tra ve da thuc tong
}
istream& operator >> (istream& is, DaThuc& dt) 
{
    //Nhap bac cua da thuc
    cout << "Nhap bac cua da thuc: "; is >> dt.n;
    //Doi co vector chua he so
    dt.a.resize(dt.n + 1);
    //Nhap cac he so cua da thuc
    cout << "Nhap he so cua da thuc: ";
    for (int i = dt.n; i >= 0; i--) is >> dt.a[i];
    return is;
}
ostream& operator << (ostream& os, DaThuc dt) 
{
    //Xuat da thuc tu don thuc bac lon den bac nho
    for (int i = dt.n; i >= 0; i--)
    {
        //He so khac 0 moi xuat don thuc
        if (dt.a[i] != 0)
        {
            //Neu he so duong va khong phai bac cao nhat thi in +
            if (i != dt.n && dt.a[i] > 0) os << " + ";
            //Neu he so am thi in -
            if (dt.a[i] < 0) os << " - ";
            //In he so, x va so mu
            if (abs(dt.a[i]) != 1 || i == 0) os << abs(dt.a[i]);
            if (i > 0) os << "x";
            if (i > 1) os << "^" << i;
        }
    }
    os << '\n';
    return os;
}