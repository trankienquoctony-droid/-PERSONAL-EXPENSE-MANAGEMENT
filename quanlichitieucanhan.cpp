#include <iostream>
#include <string>

using namespace std;

// Struct duy nhất lưu thông tin giao dịch
struct GiaoDich {
    int id;
    string danhMuc; // Tên danh mục (Ví dụ: Luong, An_uong, Mua_sam...)
    int loai;       // 1: Thu nhập, 2: Chi tiêu
    double soTien;  // Số tiền
};

int main() {
    GiaoDich ds[100];     // Mảng chứa tối đa 100 giao dịch
    int n = 0;            // Số lượng giao dịch hiện có
    double nganSach = 0;  // Hạn mức chi tiêu tối đa
    int luaChon;

    do {
        cout << "\n=================================\n";
        cout << "  QUAN LY CHI TIEU DON GIAN\n";
        cout << "=================================\n";
        cout << "1. Them giao dich moi (Thu/Chi)\n";
        cout << "2. Xem danh sach giao dich\n";
        cout << "3. Dat ngan sach chi tieu\n";
        cout << "4. Xem bao cao so du\n";
        cout << "0. Thoat\n";
        cout << "Lựa chon cua ban: ";
        cin >> luaChon;

        if (luaChon == 1) {
            if (n >= 100) {
                cout << "=> Danh sach da day!\n";
                continue;
            }

            ds[n].id = n + 1; // ID tự động tăng
            cout << "Nhap loai (1: Thu nhap, 2: Chi tieu): ";
            cin >> ds[n].loai;
            cout << "Nhap tên danh muc (viet lien, vi du: An_uong): ";
            cin >> ds[n].danhMuc;
            cout << "Nhap so tien: ";
            cin >> ds[n].soTien;

            // Kiểm tra cảnh báo nếu là khoản Chi và đã đặt Ngân sách
            if (ds[n].loai == 2 && nganSach > 0) {
                double tongChi = 0;
                for (int i = 0; i <= n; i++) {
                    if (ds[i].loai == 2) {
                        tongChi += ds[i].soTien;
                    }
                }
                if (tongChi > nganSach) {
                    cout << "=> [CANH BAO] Tong chi (" << tongChi 
                         << ") da VUOT ngan sach (" << nganSach << ")!\n";
                }
            }

            n++;
            cout << "=> Them giao dich thanh cong!\n";

        } else if (luaChon == 2) {
            if (n == 0) {
                cout << "=> Chua co giao dich nao!\n";
            } else {
                cout << "\nID\tLoai\t\tDanh muc\tSo tien\n";
                cout << "-----------------------------------------\n";
                for (int i = 0; i < n; i++) {
                    cout << ds[i].id << "\t"
                         << (ds[i].loai == 1 ? "Thu nhap" : "Chi tieu") << "\t"
                         << ds[i].danhMuc << "\t\t"
                         << ds[i].soTien << "\n";
                }
            }

        } else if (luaChon == 3) {
            cout << "Nhap han muc chi tieu toi da: ";
            cin >> nganSach;
            cout << "=> Da thiet lap ngan sach: " << nganSach << " VND\n";

        } else if (luaChon == 4) {
            double tongThu = 0, tongChi = 0;
            for (int i = 0; i < n; i++) {
                if (ds[i].loai == 1) {
                    tongThu += ds[i].soTien;
                } else {
                    tongChi += ds[i].soTien;
                }
            }
            cout << "\n=== BÁO CÁO TÀI CHÍNH ===\n";
            cout << "Tong thu nhập : " << tongThu << " VND\n";
            cout << "Tong chi tieu : " << tongChi << " VND\n";
            cout << "-------------------------\n";
            cout << "SO DU HIEN TAI: " << (tongThu - tongChi) << " VND\n";
        }

    } while (luaChon != 0);

    cout << "\nCam on ban da su dung chuong trinh!\n";
    return 0;
}