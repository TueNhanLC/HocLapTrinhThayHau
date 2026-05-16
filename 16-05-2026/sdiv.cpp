#include <cstdio>
#include <iostream>
#include <cmath>

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    long long n = 0;
    if (!(std::cin >> n)) return 0;
    
    long long tong = 0;
    long long can_n = std::sqrt(n);

    for (long long i = 1; i <= can_n; ++i) 
    {
        if (n % i == 0) 
        {
            tong += i; // Cộng ước nhỏ i
            
            // Nếu ước lớn (n / i) khác ước nhỏ i thì mới cộng vào
            if (i != n / i) 
            {
                tong += n / i;
            }
        }
    }

    std::cout << tong;
    return 0;

}