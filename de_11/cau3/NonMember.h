#include "KhachHang.h"

class NonMember : public KhachHang {
public:
    NonMember(string hoTen, string soCMND, int soThang, bool thuePT)
        : KhachHang(hoTen, soCMND, soThang, thuePT) {}

    double TinhChiPhi() const override {
        double chiPhiCoBan = 200 * getSoThang(); // Phí cơ bản
        double chiPhiPT = 0;
        if (getThuePT()) {
            chiPhiPT = 200 * getSoThang(); // Phí PT nếu có
        }
        return chiPhiCoBan + chiPhiPT;
    }

    void XuatThongTin() const override {
        KhachHang::XuatThongTin();
        cout << "\tGoi dich vu: Non-member" << endl;
        cout << "\tTong chi phi: " << TinhChiPhi() << endl;
    }
};


