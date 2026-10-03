# PERSONAL EXPENSE MANAGEMENT (C++ CONSOLE)

A simple C++ console program that helps track income, expenses, manage budgets, and generate personal financial balance reports.

---

## 📌 Main Features

- **Transaction Management:** Add new income/expense transactions and view the transaction history list.
- **Budget & Alerts:** Set a maximum spending limit and automatically warn when total expenses exceed the limit.
- **Financial Reporting:** Calculate total income, total expenses, and current balance.

---

## 🛠 System Requirements & Setup

- **C++ Compiler:** GCC/MinGW, Clang, or MSVC (supports C++11 or later).
- **Operating System:** Windows, macOS, Linux.

---

## 🚀 Compilation & Run Instructions

### 1. Compile the source code

Use `g++` to compile the `main.cpp` file:

```bash
g++ main.cpp -o main
```

### 2. Run the program

- **On Windows:**
  ```cmd
  main.exe
  ```
- **On Linux / macOS:**
  ```bash
  ./main
  ```

---

## 📖 How to Use

When the program starts, the interactive menu will be displayed:

```text
=================================
  QUAN LY CHI TIEU DON GIAN
=================================
1. Add new transaction (Income/Expense)
2. View transaction list
3. Set spending budget
4. View financial report
0. Exit
=================================
```

- Enter `1` to add a new transaction type, category name (without spaces, e.g. `An_uong`), and amount.
- Enter `2` to display the income/expense history table.
- Enter `3` to set the spending warning limit.
- Enter `4` to view the summary of income/expenses and account balance.
- Enter `0` to exit the program.

---

## 👤 Author

- **Implemented by:** [Trần Kiến Quốc]
- **Class / Course:** Basic C++ Programming
