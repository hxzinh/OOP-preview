#include <iostream>

using namespace std;

class CDate
{
    private:
        int ngay, thang, nam;

    public:
        CDate();
        CDate(int d, int m, int y);
        bool namNhuan(int iNam) const;
        int ngayTrongThang(int iThang, int iNam) const;
        CDate operator++();
        CDate operator++(int);
        friend istream& operator>>(istream& is, CDate date);
        friend ostream& operator<<(ostream& os, const CDate date);
};