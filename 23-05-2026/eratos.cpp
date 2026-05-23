#include <iostream>
#include </home/newbielinux/code/HocLapTrinhThayHau/Lib.hpp>
#include <cstdio>

int main()
{
    freopen("input.inp","r", stdin);
    freopen("output.out","w", stdout);
    int n = 0;
    std::cin >> n;
    for(int  i =2; i<=n; i++)
    {
        if(!KTNT(i)){std::cout << i << " ";}
    }

    return 0;
}