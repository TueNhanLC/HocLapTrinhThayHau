#include <iostream>
#include <cstdio>

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    int max = 0, c = 0;
    long long n = 0;
   std::cin >> n;
    while(n>0)
    {
        c = n%10;
        if (c>max)
        {
            max = c; 
        }
        n /= 10;
    }
    std::cout << max;
    return 0;
}