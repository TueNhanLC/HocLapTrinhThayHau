#include <iostream>
#include <cstdio>

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.INP", "w", stdout);
    long long n;
    std::cin >> n;

    int tong = 0;
    long long temp = n; 

    while (temp > 0) {
        tong += temp % 10; 
        temp /= 10;        
    }
    std::cout << tong << std::endl;
    return 0;
}