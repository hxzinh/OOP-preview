#pragma once
#include <vector>
#include <iostream>
using namespace std;
class DaThuc
{
private:
    vector<float> a;    //Chua he so
    int n;              //Bac cua da thuc
public:
    //Constructor khoi tao
    DaThuc(int bac = 0);
    //Nap chong toan tu +
    DaThuc operator + (const DaThuc& m);
    //Nap chong toan tu >>
    friend istream& operator >> (istream& is, DaThuc& dt);
    //Nap chong toan tu <<
    friend ostream& operator << (ostream& os, DaThuc dt);
};