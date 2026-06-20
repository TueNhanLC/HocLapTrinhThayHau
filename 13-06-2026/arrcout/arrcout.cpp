#include <iostream>
#include <iterator> 
#include <cstdio>
#include <algorithm>
int DemSoPhanTu(int j, int a[], int n)
{
    int loop = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == j)
        {
            loop += 1;
        }
    }
    return loop;
}

int ViTriFind(int x, int a[], int size) {
    int* p = std::find(a, a + size, x);
    if (p != a + size) {
        return p - a; 
    }
    return -1; 
}

int main()
{
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/arrcout/.inp", "r", stdin);
    freopen("/home/newbielinux/Desktop/code/HocLapTrinhThayHau/13-06-2026/arrcout/.out", "w", stdout);
    int n = 0;
    std::cin >> n;
    int c[n];
    for(int i = 0; i<n; i++)
    {
        std::cin >> c[i];
    }
    for(int j = 0; j<n; j++)
    {
        if (ViTriFind(j, c, n) != -1)
        {
            std::cout << j << " ";
        std::cout << DemSoPhanTu(j, c, n) << std::endl;
        }
        
    }
    return 0;
}