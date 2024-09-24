#include <iostream>
using namespace std;

void nhapMaTran(int mt[10][10], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            cin >> mt[i][j];
        }
    }
}

void xuatMaTran(int mt[10][10], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
}

void congMaTran(int a[10][10], int b[10][10], int ketQua[10][10], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            ketQua[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Các phép toán trừ, nhân tương tự...

int main() {
    int a[10][10], b[10][10], ketQua[10][10];
    int hang, cot;

    cout << "Nhap so hang va so cot cua ma tran: ";
    cin >> hang >> cot;

    cout << "Nhap ma tran A:\n";
    nhapMaTran(a, hang, cot);

    cout << "Nhap ma tran B:\n";
    nhapMaTran(b, hang, cot);

    congMaTran(a, b, ketQua, hang, cot);
    cout << "Tong hai ma tran:\n";
    xuatMaTran(ketQua, hang, cot);

    return 0;
}
