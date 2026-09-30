# QUẢN LÝ CHI TIÊU CÁ NHÂN (C++ CONSOLE)

Chương trình console C++ đơn giản giúp theo dõi thu nhập, chi tiêu, quản lý ngân sách và báo cáo số dư tài chính cá nhân.

---

## 📌 Tính năng chính

- **Quản lý giao dịch:** Thêm giao dịch Thu/Chi mới và xem lịch sử danh sách giao dịch.
- **Ngân sách & Cảnh báo:** Thiết lập hạn mức chi tiêu tối đa và tự động phát cảnh báo khi tổng chi tiêu vượt mức.
- **Báo cáo tài chính:** Thống kê tổng thu, tổng chi và tính toán số dư hiện tại.

---

## 🛠 Yêu cầu hệ thống & Cài đặt

- **Trình biên dịch C++:** GCC/MinGW, Clang hoặc MSVC (hỗ trợ C++11 trở lên).
- **Hệ điều hành:** Windows, macOS, Linux.

---

## 🚀 Hướng dẫn biên dịch & Chạy chương trình

### 1. Biên dịch mã nguồn

Sử dụng `g++` để biên dịch file `main.cpp`:

```bash
g++ main.cpp -o main
```

### 2. Chạy chương trình

- **Trên Windows:**
  ```cmd
  main.exe
  ```
- **Trên Linux / macOS:**
  ```bash
  ./main
  ```

---

## 📖 Hướng dẫn sử dụng

Khi chạy chương trình, màn hình sẽ hiển thị menu tương tác:

```text
=================================
  QUAN LY CHI TIEU DON GIAN
=================================
1. Them giao dich moi (Thu/Chi)
2. Xem danh sach giao dich
3. Dat ngan sach chi tieu
4. Xem bao cao so du
0. Thoat
=================================
```

- Nhập `1` để nhập loại giao dịch, tên danh mục (viết liền, ví dụ: `An_uong`) và số tiền.
- Nhập `2` để hiển thị bảng lịch sử thu chi.
- Nhập `3` để cài đặt hạn mức cảnh báo chi tiêu.
- Nhập `4` để xem tổng quan thu/chi và số dư tài khoản.
- Nhập `0` để kết thúc chương trình.

---

## 👤 Tác giả

- **Người thực hiện:** [Tên của bạn]
- **Lớp / Khóa học:** Lập trình C++ cơ bản