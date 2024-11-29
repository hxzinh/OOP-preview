#include "CDate.h"

/**
 * @class CDate
 * @brief Lop bieu dien ngay thang nam va cung cap cac thao tac co ban lien quan.
 */

// Constructor mac dinh, khoi tao ngay 1/1/2024.
CDate::CDate() : ngay(1), thang(1), nam(2024) {}

/**
 * @brief Constructor voi tham so.
 * @param d Ngay.
 * @param m Thang.
 * @param y Nam.
 */
CDate::CDate(int d, int m, int y) : ngay(d), thang(m), nam(y) {}

/**
 * @brief Kiem tra xem mot nam co phai nam nhuan khong.
 * @param iNam Nam can kiem tra.
 * @return true neu la nam nhuan, false neu khong.
 */
bool CDate::namNhuan(int iNam) const {
    if (iNam % 4 == 0 && iNam % 100 != 0 || iNam % 400 == 0)
        return true;
    else 
        return false;
}

/**
 * @brief Lay so ngay trong thang cua mot nam nhat dinh.
 * @param iThang Thang can kiem tra.
 * @param iNam Nam can kiem tra.
 * @return So ngay trong thang.
 */
int CDate::ngayTrongThang(int iThang, int iNam) const {
    switch (iThang) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (namNhuan(iNam)) return 29;
            else return 28;
        default:
            return 31;
    }
}

/**
 * @brief Tang ngay hien tai len 1 (tien to).
 * @return CDate sau khi tang.
 */
CDate CDate::operator++() {
    ngay++;
    if (ngay > ngayTrongThang(thang, nam)) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }
    return *this;
}

/**
 * @brief Tang ngay hien tai len 1 (hau to).
 * @return CDate truoc khi tang.
 */
CDate CDate::operator++(int) {
    CDate temp = *this;
    ngay++;
    if (ngay > ngayTrongThang(thang, nam)) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }
    return temp;
}

/**
 * @brief Doc du lieu ngay thang nam tu luong dau vao strdin.
 * @param is Luong dau vao stdin.
 * @param date Doi tuong CDate de luu tru du lieu.
 * @return Tham chieu toi luong dau vao stdin.
 */
istream& operator>>(istream& is, CDate date) {
    char temp;
    is >> date.ngay >> temp >> date.thang >> temp >> date.nam;
    return is;
}

/**
 * @brief Xuat ngay thang nam ra luong dau ra stdout.
 * @param os Luong dau ra stdout.
 * @param date Doi tuong CDate can xuat.
 * @return Tham chieu toi luong dau ra stdout.
 */
ostream& operator<<(ostream& os, const CDate date) {
    os << date.ngay << "/" << date.thang << "/" << date.nam;
    return os;
}
