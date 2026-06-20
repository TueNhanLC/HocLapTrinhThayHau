#include <iostream>
#include <cstdio>
#include </home/newbielinux/Desktop/code/HocLapTrinhThayHau/Lib.hpp>
int main() {
    freopen("TONG.inp", "r", stdin);
    freopen("TONG.out", "w", stdout);
    int n = 0; double kq = 0;
    std::cin >> n;
    
    int so_so_hang = 0, sum = 0;
    so_so_hang = (n - 1) / 1 + 1;
    sum = (n + 1) * so_so_hang / 2;
    kq = sum;

    std::cout << kq << std::endl;
    return 0;
}
