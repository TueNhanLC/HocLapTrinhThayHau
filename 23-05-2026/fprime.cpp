#include <iostream>
#include </home/newbielinux/code/HocLapTrinhThayHau/Lib.hpp>
#include <cstdio>

int main()
{
    freopen("FPRIME.INP", "r", stdin) ;
    freopen("FPRIME.OUT", "w", stdout);
    int p = 0;
    int d = 0;
    long long f_current = 2; 
    long long f_next = 3;

    while (f_current <= p)
    {
        if (SoNguyenTo(f_current))
        {
            d++;
        }

        long long temp = f_current + f_next;
        f_current = f_next;
        f_next = temp;
    }

    std::cout << d << std::endl;
    return 0;
}