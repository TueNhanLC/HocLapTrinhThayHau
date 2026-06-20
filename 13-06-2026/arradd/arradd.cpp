#include <iostream>
#include <cstdio>

int main()
{
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/arradd/arradd.inp", "r", stdin);
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/arradd/arradd.out", "w", stdout);
    int n = 0, m = 0; 
    std::cin >> n >> m;
    int c[n+m];
    for(int i = 0; i<n; i++)
    {
        std::cin >> c[i];
    }
    for(int j = n; j<=n+m-1 ; j++)
    {
        std::cin >> c[j];
    }
    for (int i = 0; i < n + m - 1; i++) {
    for (int w = 0; w < n + m - 1 - i; w++) {
        if (c[w] < c[w+1]) {
            std::swap(c[w], c[w+1]);
        }
    }
}

    for (int f = n + m - 1; f >= 0; f--)

    {
        std::cout << c[f] << std::endl; 
    }
    return 0;
}