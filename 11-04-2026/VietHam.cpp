#include <iostream>
#include <cmath>
using namespace std;

int KTNT(int n) {
    if (n < 2) return 0;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    return (dem == 2) ? 1 : 0;
}

int KiemTraChanLe(int a) {
    return (a % 2 == 0) ? 1 : 0;
}

void nhap_mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> a[i];
    }
}

void xuat_mang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int TongPhanTuMang(int n, int a[]) {
    int Tong = 0;
    for (int i = 0; i < n; i++) {
        Tong += a[i];
    }
    return Tong;
}

double TBPhanTuMang(int n, int a[]) {
    int tong = TongPhanTuMang(n, a);
    return static_cast<double>(tong) / n;
}

int TongSoChan(int n, int a[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (KiemTraChanLe(a[i]) == 1) {
            tong += a[i];
        }
    }
    return tong;
}

int TongSoLe(int n, int a[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (KiemTraChanLe(a[i]) == 0) {
            tong += a[i];
        }
    }
    return tong;
}

int TongSoNguyenTo(int n, int a[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (KTNT(a[i]) == 1) {
            tong += a[i];
        }
    }
    return tong;
}


int main() {
    int n = 0, a[100];
    cout << "Nhap do dai mang: ";
    cin >> n;

    nhap_mang(n, a);

    cout << "Mang vua nhap la: ";
    xuat_mang(n, a);
    cout << endl;

    cout << "Tong so phan tu mang la: " << TongPhanTuMang(n, a) << endl;
    cout << "Trung binh phan tu mang la: " << TBPhanTuMang(n, a) << endl;
    cout << "Tong so chan la: " << TongSoChan(n, a) << endl;
    cout << "Tong so le la: " << TongSoLe(n, a) << endl;
    cout << "Tong so nguyen to la: " << TongSoNguyenTo(n, a) << endl;

    return 0;
}