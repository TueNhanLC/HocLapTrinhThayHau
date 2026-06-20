#include <iostream>
#include <cstdio>
#include </home/newbielinux/Desktop/code/HocLapTrinhThayHau/Lib.hpp>
#include <vector>
// g++ BANBE.cpp 
// -o BANBE
// ./BANBE
// /home/newbielinux/Desktop/code/HocLapTrinhThayHau/20-06-2026/

bool tong_uoc(int a = 0, int b = 0)
{
    int tong_uoc_a = 0, tong_uoc_b = 0;
    std::vector <int> UocA = {}; std::vector <int> UocB = {};
    UocA = findDivisors(a); UocB = findDivisors(b);
    UocA.pop_back(); UocB.pop_back();
    for (int i = 0; i < UocA.size(); i++) // Dòng 16

    {
        tong_uoc_a += UocA[i];
    }
   for (int j = 0; j < UocB.size() ; j++) // Dòng 20

    {
        tong_uoc_b += UocB[j];
        
    }
    if (tong_uoc_a == tong_uoc_b)
    {
        return true;
    }
    else{return false;}
}


int main() {
    freopen("BANBE.inp", "r", stdin);
    freopen("BANBE.out", "w", stdout);
    int l = 0, r = 0, so_ban_be = 0;
    std::cin >> l >> r;
    for (int i = l; i<=r; i++)
    {
        if (tong_uoc(l, r))
        {
            so_ban_be += 1;
        }
    }
    std::cout << so_ban_be << std::endl;
    return 0;
}
