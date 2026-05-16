#include <cstdio>
#include <iostream>
#include <cmath>

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    long long tong = 0, a = 0, x = 0;
    std::cin >> a >> x;
    tong = pow(a, x);
    tong = tong % 1000000007;
    std::cout << tong;
    return 0;
}