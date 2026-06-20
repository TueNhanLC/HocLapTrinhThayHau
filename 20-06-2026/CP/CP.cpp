#include <iostream>
#include <cstdio>
#include </home/newbielinux/Desktop/code/HocLapTrinhThayHau/Lib.hpp>
// g++ /home/newbielinux/Desktop/code/HocLapTrinhThayHau/20-06-2026/CP.cpp -o "/home/newbielinux/Desktop/code/HocLapTrinhThayHau/20-06-2026/CP/CPCP"
// ./CP
// /home/newbielinux/Desktop/code/HocLapTrinhThayHau/20-06-2026/
int main() {
    freopen("CP.inp", "r", stdin);
    freopen("CP.out", "w", stdout);
    int a = 0, b = 0; double kq = 0;
    std::cin >> a >> b;
    for (int i = 0; i<=b; i++)
    {
        if (KiemTraChinhPhuong(i)){kq +=1;}
        
    }
    std::cout << kq << std::endl;
    return 0;
}
