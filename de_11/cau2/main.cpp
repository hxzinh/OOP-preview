#include <iostream>
#include "CDate.h"

using namespace std;

int main() {
    CDate date;
    cout << "Nhap ngay thang nam: ";
    cin >> date;

    cout << "Ngay vua nhap: " << date << '\n';
    cout << "Ngay tiep theo la ngay: " << ++date << '\n';

    return 0;
}