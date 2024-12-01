#include "KhachHang.h"

class Premium : public KhachHang {

public:
    Premium(string hoTen, string soCMND, int soThang, bool thuePT)
        : KhachHang(hoTen, soCMND, soThang, thuePT) {}

    double TinhChiPhi() const override {
        return 1000 * getSoThang(); // Phí cơ bản, PT miễn phí
    }

    void XuatThongTin() const override {
        KhachHang::XuatThongTin();
        cout << "\tGoi dich vu: Premium" << endl;
        cout << "\tTong chi phi: " << TinhChiPhi() << endl;
    }
};


