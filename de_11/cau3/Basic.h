#include "KhachHang.h"

class Basic : public KhachHang {
private:
    bool dangKyLopHoc; // Thuộc tính xác định có đăng ký lớp học hay không

public:
    Basic(string hoTen, string soCMND, int soThang, bool thuePT, bool dangKyLopHoc)
        : KhachHang(hoTen, soCMND, soThang, thuePT), dangKyLopHoc(dangKyLopHoc) {}

    double TinhChiPhi() const override {
        double chiPhi = 500 * getSoThang(); // Phí cơ bản
        if (getThuePT()) chiPhi += 100 * getSoThang(); // Phí PT nếu có
        if (dangKyLopHoc) chiPhi += 100 * getSoThang(); // Chỉ cộng phí lớp học khi đăng ký
        return chiPhi;
    }

    void XuatThongTin() const override {
        KhachHang::XuatThongTin();
        cout << "\tGoi dich vu: Basic" << endl;
        cout << "\tDang ky lop hoc: ";
        if (dangKyLopHoc) {
            cout << "Co" << endl;
        } else {
            cout << "Khong" << endl;
        }
        cout << "\tTong chi phi: " << TinhChiPhi() << endl;
    }
};

