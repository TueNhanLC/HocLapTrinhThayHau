#include <iostream>
#include <cstdio>
#include </home/newbielinux/code/HocLapTrinhThayHau/Lib.hpp>

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n = 0, kq = -1 ;
    std::cin >> n;
    n/=10;
    while (n>0)
    {
        if(KTNT(n) == false)
        {
            if(n>kq){kq=n;}
        }
        n = n / 10;
    }
    std::cout << kq << std::endl;
    return 0;
}