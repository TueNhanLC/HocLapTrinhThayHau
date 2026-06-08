#include <iostream>
#include <cstdio>

int main()
{
    freopen("ilucky.inp", "r",stdin);
    freopen("ilucky.out" ,"w",stdout);
    int n=0, tong = 0, tong2 = 0;
    std::cin >> n;
    int x[n];
    for(int i =0;i<n;i++)
    {
        std::cin >> x[i];
        tong += x[i];
    }
    if(tong%2 != 0)
    {
        std::cout << -1 << std::endl; 
        return 0;
    }
    for(int i = 0; i<n;i++)
    {
        tong2 += x[i];
        if (tong2 == tong/2)
        {
            std::cout << i+1 << std::endl; 
        }
    }
    return 0;
    
}