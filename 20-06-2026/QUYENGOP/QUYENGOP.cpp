#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
// g++ QUYENGOP.cpp 
// -o QUYENGOP
// ./QUYENGOP

int main() {
    freopen("QUYENGOP.inp", "r", stdin);
    freopen("QUYENGOP.out", "w", stdout);
    int n = 0, m = 0, so_to_nhat = 0, loop = 0;
    std::vector <int> sach = {}; 
    std::cin >> n;
    for(int i = 0; i<n;i++)
    {
        std::cin >> m;
        sach.push_back(m);
    }
    so_to_nhat = *std::max_element(sach.begin(), sach.end());
    for (int x : sach) {
    if (x == so_to_nhat) {
        loop += 1;
    }
    }
    std::cout << loop << std::endl;
    std::cout << so_to_nhat << std::endl;
    return 0;
}
