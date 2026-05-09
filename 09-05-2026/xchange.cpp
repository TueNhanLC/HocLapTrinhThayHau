#include <iostream>
#include <cstdio>

int main()
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
    long long x;
    std::cin >> x;

    if (x % 10 != 0) 
    {
    std::cout << -1 << std::endl;
    } 
    else 
    {
        long long count = 0;
    
        count += x / 50;  
        x %= 50;          
    
        count += x / 20;  
        x %= 20;
    
        count += x / 10;  
    
        std::cout << count << std::endl;
        }
    return 0;
}