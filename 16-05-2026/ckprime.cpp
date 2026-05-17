#include <cstdio>
#include <iostream>
#include <cmath>
#include </home/newbielinux/code/HocLapTrinhThayHau/Lib.hpp>

int main()
{
    fflush(stdout);
    fflush(stdin);
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    
    int n = 0;
    bool tong = false;
    std::cin >> n;
    tong = KTNT(n);
    if (tong)
    {
        std::cout << "false";
    }
    else
    {
        std::cout << "true";
    }
    
    return 0;
}