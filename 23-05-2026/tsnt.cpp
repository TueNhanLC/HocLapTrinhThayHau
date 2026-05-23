#include <iostream>
#include </home/newbielinux/code/HocLapTrinhThayHau/Lib.hpp>
#include <cstdio>
#include <vector>

int main()
{
    freopen("tsnt.inp","r", stdin);
    freopen("tsnt.out","w", stdout);
    int n = 0;
    std::cin >> n;
    std::vector<int> tsnt = primeFactorize(n);
    for(int i = 0; i<tsnt.size(); i++)
    {
        std::cout << tsnt[i] << " ";
    }
    return 0;
}