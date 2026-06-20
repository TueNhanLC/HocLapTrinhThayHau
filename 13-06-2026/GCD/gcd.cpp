#include <iostream>
#include <cstdio>
#include </home/newbielinux/Desktop/code/HocLapTrinhThayHau/Lib.hpp>
int main()
{
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/GCD/gcd.inp", "r", stdin);
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/GCD/gcd.out", "w", stdout);
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    int ucln = UCLN(UCLN(a, b), c); 
    std::cout << ucln << std::endl;
    return 0;
}