#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0, b=0, tong=0, hieu=0, thuong=0, tich=0;
    cout << "vui long nhap so, a="; cin >> a;
    cout << "vui long nhap so b="; cin >> b;
    tong = a + b; // tong 2 so
    hieu = a - b; // hieu 2 so
    thuong = a / b; // thuong 2 so
    tich = a * b; // tich 2 so
    std::cout << "tong la: " << tong << std::endl;
    std::cout << "hieu la: " << hieu << std::endl;
    std::cout << "tich la: " << tich << std::endl;
    std::cout << "thuong la: " << thuong << std::endl;
    return 0;
}
